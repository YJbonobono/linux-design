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
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9dc7942d, "v4l2_event_unsubscribe" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xfc131f70, "v4l2_event_queue_fh" },
	{ 0x754d539c, "strlen" },
	{ 0x38b78979, "vb2_mmap" },
	{ 0x10c2c975, "usb_debug_root" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0xfd205417, "no_llseek" },
	{ 0x98442797, "vb2_create_bufs" },
	{ 0xf1ea0797, "vb2_fop_poll" },
	{ 0x7bf1cf39, "vb2_ioctl_streamon" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xe06c1380, "vb2_ops_wait_prepare" },
	{ 0x86a54209, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xadebce6f, "usb_autopm_get_interface" },
	{ 0xefb22ee3, "usb_enable_autosuspend" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x1b5c0864, "v4l2_ctrl_merge" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0xf8c679e2, "input_event" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xfb578fc5, "memset" },
	{ 0x63c4ae47, "vb2_vmalloc_memops" },
	{ 0x5052ba6b, "usb_string" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xcd915485, "vb2_fop_mmap" },
	{ 0x57f95d83, "vb2_ioctl_qbuf" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xf3ac10ea, "v4l2_event_subscribe" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb77b0159, "v4l2_prio_init" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0x13641ab3, "v4l2_fh_init" },
	{ 0x7bd2de6a, "vb2_plane_vaddr" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x28acfc69, "usb_poison_urb" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x2e985a00, "usb_driver_claim_interface" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5e78a45e, "vb2_qbuf" },
	{ 0x128f9491, "vb2_ioctl_prepare_buf" },
	{ 0x25987266, "vb2_ioctl_create_bufs" },
	{ 0x3ca552d, "usb_free_coherent" },
	{ 0x9f06453d, "vb2_querybuf" },
	{ 0x63294a0f, "vb2_ioctl_dqbuf" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xf859adf1, "media_device_cleanup" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x4b77c88d, "v4l2_ctrl_replace" },
	{ 0xcad8c922, "vb2_streamon" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0x336a7ddf, "vb2_fop_release" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x79d13d2b, "vb2_expbuf" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x7e82aa1a, "usb_clear_halt" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xd9afef59, "usb_driver_release_interface" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xabdf8cd1, "v4l2_device_register_subdev" },
	{ 0x9326bd3d, "media_create_pad_link" },
	{ 0x5b64ca25, "vb2_reqbufs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x91f11014, "usb_get_intf" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0xd0f22cfd, "v4l2_subdev_init" },
	{ 0x80420d96, "vb2_ioctl_querybuf" },
	{ 0xfdc284ce, "__media_device_register" },
	{ 0x6dff86b8, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0xe67be5cc, "usb_match_one_id" },
	{ 0x96848186, "scnprintf" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x12d77256, "vb2_ops_wait_finish" },
	{ 0xd98fb5d6, "v4l2_fh_add" },
	{ 0x930cd6e2, "v4l2_fh_del" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x2a771f85, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8de249f7, "vb2_poll" },
	{ 0x6c73b2d6, "media_device_init" },
	{ 0xa32150eb, "usb_alloc_coherent" },
	{ 0x2943ec09, "usb_get_current_frame_number" },
	{ 0x30be69e8, "v4l2_format_info" },
	{ 0xd54d9bcb, "vb2_ioctl_streamoff" },
	{ 0xc1f208fd, "vb2_queue_release" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x2c1b5ba8, "vb2_streamoff" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xdbd288d6, "media_device_unregister" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0xd8cef6e1, "clear_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x65e08be7, "usb_autopm_put_interface" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x109cb0ec, "usb_put_intf" },
	{ 0xb4001ace, "v4l2_fh_exit" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x9461543d, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-vmalloc,mc");

MODULE_ALIAS("usb:v0416pA91Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0721d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp082Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2640d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2641d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2643d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p264Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p7670d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8600d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05C8p0403d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0BD3p0555d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0516d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v199Ep8102d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Fp2002d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0201d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0211d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v29FEp4D53d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B03d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip01in*");

MODULE_INFO(srcversion, "A53E13628B4AF99BF494631");
