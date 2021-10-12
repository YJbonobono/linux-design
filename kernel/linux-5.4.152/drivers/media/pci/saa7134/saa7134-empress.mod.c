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
	{ 0x6e724099, "param_array_ops" },
	{ 0xc12b2037, "saa7134_vb2_buffer_queue" },
	{ 0x6bc6659, "saa7134_ts_buffer_prepare" },
	{ 0x331c1e63, "saa7134_ts_buffer_init" },
	{ 0x12d77256, "vb2_ops_wait_finish" },
	{ 0xe06c1380, "vb2_ops_wait_prepare" },
	{ 0x545b079b, "saa7134_ts_queue_setup" },
	{ 0x336a7ddf, "vb2_fop_release" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0xcd915485, "vb2_fop_mmap" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0xf1ea0797, "vb2_fop_poll" },
	{ 0xcb135cd9, "vb2_fop_read" },
	{ 0x9dc7942d, "v4l2_event_unsubscribe" },
	{ 0x1f8e5975, "v4l2_ctrl_subscribe_event" },
	{ 0x68622281, "v4l2_ctrl_log_status" },
	{ 0x1735a193, "saa7134_s_frequency" },
	{ 0x7ea89336, "saa7134_g_frequency" },
	{ 0xbb2cb089, "saa7134_s_tuner" },
	{ 0x6e18304, "saa7134_g_tuner" },
	{ 0x3388680c, "saa7134_s_input" },
	{ 0x46a20236, "saa7134_g_input" },
	{ 0xc9ecbe6f, "saa7134_enum_input" },
	{ 0x659a929e, "saa7134_querystd" },
	{ 0x64bc87f5, "saa7134_s_std" },
	{ 0x748f1c89, "saa7134_g_std" },
	{ 0xd54d9bcb, "vb2_ioctl_streamoff" },
	{ 0x7bf1cf39, "vb2_ioctl_streamon" },
	{ 0x63294a0f, "vb2_ioctl_dqbuf" },
	{ 0xa8828321, "vb2_ioctl_expbuf" },
	{ 0x57f95d83, "vb2_ioctl_qbuf" },
	{ 0x80420d96, "vb2_ioctl_querybuf" },
	{ 0xc2f98784, "vb2_ioctl_reqbufs" },
	{ 0x2ce15287, "saa7134_querycap" },
	{ 0x17d35aa8, "saa7134_ts_unregister" },
	{ 0x5902f741, "saa7134_ts_register" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0xc1f208fd, "vb2_queue_release" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xc5850110, "printk" },
	{ 0x86a54209, "__video_register_device" },
	{ 0x9461543d, "vb2_queue_init" },
	{ 0xc3000714, "vb2_dma_sg_memops" },
	{ 0xec0c7ec2, "v4l2_ctrl_add_handler" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x730c4be3, "saa7134_boards" },
	{ 0x40950f58, "video_device_release" },
	{ 0xeb2e67bc, "video_device_alloc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xb53c1438, "video_devdata" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd71eb304, "saa7134_ts_start_streaming" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1750e0, "saa7134_ts_stop_streaming" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "saa7134,videobuf2-v4l2,videodev,videobuf2-dma-sg");


MODULE_INFO(srcversion, "3282478ED78D0CEE1EDACB2");
