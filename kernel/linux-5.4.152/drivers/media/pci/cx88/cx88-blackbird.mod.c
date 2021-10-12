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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x12d77256, "vb2_ops_wait_finish" },
	{ 0xe06c1380, "vb2_ops_wait_prepare" },
	{ 0x336a7ddf, "vb2_fop_release" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0xcd915485, "vb2_fop_mmap" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0xf1ea0797, "vb2_fop_poll" },
	{ 0xcb135cd9, "vb2_fop_read" },
	{ 0x9dc7942d, "v4l2_event_unsubscribe" },
	{ 0x1f8e5975, "v4l2_ctrl_subscribe_event" },
	{ 0xd54d9bcb, "vb2_ioctl_streamoff" },
	{ 0x7bf1cf39, "vb2_ioctl_streamon" },
	{ 0x63294a0f, "vb2_ioctl_dqbuf" },
	{ 0x57f95d83, "vb2_ioctl_qbuf" },
	{ 0x80420d96, "vb2_ioctl_querybuf" },
	{ 0xc2f98784, "vb2_ioctl_reqbufs" },
	{ 0xb8a6e99d, "cx8802_unregister_driver" },
	{ 0x2ff0644d, "cx8802_register_driver" },
	{ 0x86a54209, "__video_register_device" },
	{ 0xbf6531d9, "cx88_vdev_init" },
	{ 0x9461543d, "vb2_queue_init" },
	{ 0xc3000714, "vb2_dma_sg_memops" },
	{ 0xec0c7ec2, "v4l2_ctrl_add_handler" },
	{ 0xd57a3992, "cx2341x_handler_init" },
	{ 0x663508c4, "cx88_set_freq" },
	{ 0xc7319a2, "cx8802_start_dma" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x9601035f, "request_firmware" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb3293c3a, "cx2341x_handler_setup" },
	{ 0x617097f2, "cx2341x_handler_set_50hz" },
	{ 0x3aa3fc45, "cx88_set_scale" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x22c8dd1d, "cx8802_get_driver" },
	{ 0x58a9ab87, "cx8802_cancel_buffers" },
	{ 0xd499f19, "cx2341x_handler_set_busy" },
	{ 0xc5850110, "printk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa9e2d52b, "cx88_querycap" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xc7159c77, "cx88_enum_input" },
	{ 0x372fe28a, "cx88_video_mux" },
	{ 0x1d676918, "cx88_newstation" },
	{ 0xcc633cd1, "cx88_get_stereo" },
	{ 0xdd64e639, "strscpy" },
	{ 0xb3e347a9, "cx88_set_stereo" },
	{ 0x242e020f, "cx88_set_tvnorm" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd0c189ae, "v4l2_ctrl_handler_log_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xccd267c4, "cx8802_buf_prepare" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x7d605fbc, "cx8802_buf_queue" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,cx8802,cx88xx,videobuf2-dma-sg,cx2341x,cx8800,videobuf2-common");


MODULE_INFO(srcversion, "39F87EDE9D96C9EEA8F8A7B");
