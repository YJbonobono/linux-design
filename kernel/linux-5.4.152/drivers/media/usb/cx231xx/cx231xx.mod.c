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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x6a1343fa, "videobuf_mmap_free" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9dc7942d, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x272c5d5a, "i2c_mux_add_adapter" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x4f8686b2, "videobuf_mmap_mapper" },
	{ 0xd574499e, "v4l2_i2c_new_subdev" },
	{ 0x68622281, "v4l2_ctrl_log_status" },
	{ 0xe76ff4c, "v4l2_subdev_call_wrappers" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x5e108ee9, "i2c_mux_del_adapters" },
	{ 0xf85227ed, "usb_reset_endpoint" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0xcb96a838, "__media_device_usb_init" },
	{ 0x617097f2, "cx2341x_handler_set_50hz" },
	{ 0xd57a3992, "cx2341x_handler_init" },
	{ 0xa05196b7, "videobuf_queue_vmalloc_init" },
	{ 0x4a08e53b, "v4l2_mc_create_media_graph" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xafac5671, "videobuf_streamon" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x86a54209, "__video_register_device" },
	{ 0x26992a28, "videobuf_iolock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdd64e639, "strscpy" },
	{ 0x5423ac0, "media_entity_setup_link" },
	{ 0x3033d39c, "usb_unlink_urb" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x4e818077, "rc_allocate_device" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e6b178e, "i2c_mux_alloc" },
	{ 0x49960010, "v4l2_s_ctrl" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa347313f, "videobuf_qbuf" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0x746c37c8, "v4l2_event_pending" },
	{ 0x13641ab3, "v4l2_fh_init" },
	{ 0x1f8e5975, "v4l2_ctrl_subscribe_event" },
	{ 0x7c12e8c8, "videobuf_querybuf" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xedbd058e, "videobuf_read_stream" },
	{ 0x3ca552d, "usb_free_coherent" },
	{ 0x2cc071a6, "i2c_unregister_device" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xf859adf1, "media_device_cleanup" },
	{ 0x9b59d023, "media_device_register_entity" },
	{ 0xd2a94134, "videobuf_stop" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0xb3293c3a, "cx2341x_handler_setup" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0x7e82aa1a, "usb_clear_halt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97ab3783, "videobuf_vmalloc_free" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a06c8c1, "videobuf_to_vmalloc" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcf7755a4, "videobuf_dqbuf" },
	{ 0xa44c434a, "videobuf_queue_is_busy" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0xfdc284ce, "__media_device_register" },
	{ 0x8e184a0e, "videobuf_waiton" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xb516ee89, "videobuf_reqbufs" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x9601035f, "request_firmware" },
	{ 0xd98fb5d6, "v4l2_fh_add" },
	{ 0x930cd6e2, "v4l2_fh_del" },
	{ 0xec0c7ec2, "v4l2_ctrl_add_handler" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa32150eb, "usb_alloc_coherent" },
	{ 0x6a01e970, "v4l2_ctrl_radio_filter" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xba5cce1e, "videobuf_read_stop" },
	{ 0x99a00c20, "i2c_new_device" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xdbd288d6, "media_device_unregister" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0x13d11be9, "videobuf_poll_stream" },
	{ 0x48b1a3f7, "v4l2_ctrl_poll" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0xb4001ace, "v4l2_fh_exit" },
	{ 0x1dc19add, "videobuf_streamoff" },
};

MODULE_INFO(depends, "videobuf-core,videodev,i2c-mux,tveeprom,mc,cx2341x,videobuf-vmalloc,rc-core");

MODULE_ALIAS("usb:v1D19p6109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p5A3Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p589Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApC039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB124d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB151d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB139d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0259d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p025Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d400[0-1]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE424d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15F4p0135d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v199Ep8002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5E50A27CC109D09817686B0");
