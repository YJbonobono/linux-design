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
	{ 0xa24f23d8, "__request_module" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9dc7942d, "v4l2_event_unsubscribe" },
	{ 0x3d177199, "media_device_usb_allocate" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x77ade3d0, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xba6be6b, "__media_pipeline_start" },
	{ 0x48112131, "media_device_unregister_entity_notify" },
	{ 0x92909cec, "_vb2_fop_release" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x43304fc3, "dvb_unregister_adapter" },
	{ 0xf111cf99, "media_device_unregister_entity" },
	{ 0xd574499e, "v4l2_i2c_new_subdev" },
	{ 0xfd463285, "dvb_create_media_graph" },
	{ 0x68622281, "v4l2_ctrl_log_status" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x49820503, "dvb_frontend_suspend" },
	{ 0x12723846, "dvb_register_frontend" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0x118aa710, "dvb_frontend_resume" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0xf1ea0797, "vb2_fop_poll" },
	{ 0x4a08e53b, "v4l2_mc_create_media_graph" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7bf1cf39, "vb2_ioctl_streamon" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x28bf2b5f, "v4l_disable_media_source" },
	{ 0xe06c1380, "vb2_ops_wait_prepare" },
	{ 0xd47e0b20, "media_device_delete" },
	{ 0xfa415342, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x86a54209, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdd64e639, "strscpy" },
	{ 0x5423ac0, "media_entity_setup_link" },
	{ 0xf31fe2da, "media_get_pad_index" },
	{ 0x3033d39c, "usb_unlink_urb" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x4e818077, "rc_allocate_device" },
	{ 0x1cb1d576, "dvb_net_release" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0x543080d5, "dvb_frontend_detach" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0xcb135cd9, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xcea4c88b, "v4l2_device_disconnect" },
	{ 0xfb578fc5, "memset" },
	{ 0x63c4ae47, "vb2_vmalloc_memops" },
	{ 0xaad38701, "rc_free_device" },
	{ 0x94e48364, "param_ops_short" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xcd915485, "vb2_fop_mmap" },
	{ 0x57f95d83, "vb2_ioctl_qbuf" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xd806d12c, "dvb_dmxdev_release" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0x35371f0c, "dvb_net_init" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0x1f8e5975, "v4l2_ctrl_subscribe_event" },
	{ 0x7bd2de6a, "vb2_plane_vaddr" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0xc4aa48, "rc_register_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x128f9491, "vb2_ioctl_prepare_buf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x30017bfa, "tveeprom_read" },
	{ 0x25987266, "vb2_ioctl_create_bufs" },
	{ 0x3ca552d, "usb_free_coherent" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x63294a0f, "vb2_ioctl_dqbuf" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x4a8b0b6a, "v4l_enable_media_source" },
	{ 0x9b59d023, "media_device_register_entity" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x531b8023, "media_device_register_entity_notify" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf042e776, "__media_pipeline_stop" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9326bd3d, "media_create_pad_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7ff06523, "dvb_register_adapter" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0x80420d96, "vb2_ioctl_querybuf" },
	{ 0xfdc284ce, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xcdc548ea, "__media_entity_setup_link" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x12d77256, "vb2_ops_wait_finish" },
	{ 0xd4c9d9b8, "ir_raw_event_store" },
	{ 0xc4a1cf1a, "i2c_probe_func_quick_read" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x2a771f85, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa8828321, "vb2_ioctl_expbuf" },
	{ 0xa32150eb, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd54d9bcb, "vb2_ioctl_streamoff" },
	{ 0xc1f208fd, "vb2_queue_release" },
	{ 0x6ffb984, "v4l2_device_put" },
	{ 0xc41422ca, "ir_raw_event_handle" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x13aadac8, "dvb_dmxdev_init" },
	{ 0x9461543d, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,mc,rc-core,dvb-core,tveeprom,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3022BB669E2C8FCE23EB53F");
