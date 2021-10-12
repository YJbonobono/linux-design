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
	{ 0xc2f98784, "vb2_ioctl_reqbufs" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9dc7942d, "v4l2_event_unsubscribe" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x1a58fbf0, "v4l2_ctrl_cluster" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0xe324b8b8, "usb_altnum_to_altsetting" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x68622281, "v4l2_ctrl_log_status" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xf1ea0797, "vb2_fop_poll" },
	{ 0x7bf1cf39, "vb2_ioctl_streamon" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0xe06c1380, "vb2_ops_wait_prepare" },
	{ 0x86a54209, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0x999e8297, "vfree" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0xcb135cd9, "vb2_fop_read" },
	{ 0xf8c679e2, "input_event" },
	{ 0x471fa3b1, "v4l2_ctrl_new_std_menu" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x3f137654, "trace_define_field" },
	{ 0xcea4c88b, "v4l2_device_disconnect" },
	{ 0x63c4ae47, "vb2_vmalloc_memops" },
	{ 0x5052ba6b, "usb_string" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xcd915485, "vb2_fop_mmap" },
	{ 0x57f95d83, "vb2_ioctl_qbuf" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0x1f8e5975, "v4l2_ctrl_subscribe_event" },
	{ 0x7bd2de6a, "vb2_plane_vaddr" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2b61baf1, "v4l2_ctrl_new_custom" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0x63294a0f, "vb2_ioctl_dqbuf" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x336a7ddf, "vb2_fop_release" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x32d43420, "v4l2_ctrl_get_name" },
	{ 0x512826fa, "v4l2_ctrl_auto_cluster" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0xcf83a698, "bpf_trace_run2" },
	{ 0x80420d96, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x12d77256, "vb2_ops_wait_finish" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0x2a771f85, "usb_ifnum_to_if" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xd54d9bcb, "vb2_ioctl_streamoff" },
	{ 0x6ffb984, "v4l2_device_put" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x9461543d, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v0471p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p030Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p032Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep400Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CCp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06BEp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1910d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1900d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7EE1DF3D2E0246FAAEAD105");
