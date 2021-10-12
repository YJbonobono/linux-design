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
	{ 0x4a93255e, "em28xx_read_reg" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9dc7942d, "v4l2_event_unsubscribe" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xf111cf99, "media_device_unregister_entity" },
	{ 0xd574499e, "v4l2_i2c_new_subdev" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x614dd5a, "v4l2_video_std_frame_period" },
	{ 0x86903c0d, "em28xx_write_regs" },
	{ 0x3f0da735, "v4l2_ctrl_notify" },
	{ 0x9f2f7639, "em28xx_setup_xc3028" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0xf2a353ac, "v4l2_i2c_tuner_addrs" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xf1ea0797, "vb2_fop_poll" },
	{ 0x4a08e53b, "v4l2_mc_create_media_graph" },
	{ 0x7bf1cf39, "vb2_ioctl_streamon" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xe06c1380, "vb2_ops_wait_prepare" },
	{ 0x6bac0f9d, "em28xx_init_usb_xfer" },
	{ 0x86a54209, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbb4bb62b, "em28xx_register_extension" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdd64e639, "strscpy" },
	{ 0x5423ac0, "media_entity_setup_link" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0xcb135cd9, "vb2_fop_read" },
	{ 0xcea4c88b, "v4l2_device_disconnect" },
	{ 0x63c4ae47, "vb2_vmalloc_memops" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xcd915485, "vb2_fop_mmap" },
	{ 0x57f95d83, "vb2_ioctl_qbuf" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0x1f8e5975, "v4l2_ctrl_subscribe_event" },
	{ 0x7bd2de6a, "vb2_plane_vaddr" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0xc4206bb5, "em28xx_unregister_extension" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x128f9491, "vb2_ioctl_prepare_buf" },
	{ 0x8fba6d11, "em28xx_uninit_usb_xfer" },
	{ 0x25987266, "vb2_ioctl_create_bufs" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x63294a0f, "vb2_ioctl_dqbuf" },
	{ 0x9b59d023, "media_device_register_entity" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x39a24b60, "v4l2_ctrl_find" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x12a38747, "usleep_range" },
	{ 0x336a7ddf, "vb2_fop_release" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f497ed3, "em28xx_audio_setup" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe7d58cd8, "v4l2_i2c_subdev_addr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0xf4cfa5b7, "em28xx_set_mode" },
	{ 0x80420d96, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x12d77256, "vb2_ops_wait_finish" },
	{ 0x7a98637f, "em28xx_stop_urbs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x409f65ef, "em28xx_write_reg" },
	{ 0x323ab7f6, "em28xx_audio_analog_set" },
	{ 0xd54d9bcb, "vb2_ioctl_streamoff" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0x921d7c65, "em28xx_boards" },
	{ 0xce75e971, "em28xx_init_camera" },
	{ 0x9461543d, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,em28xx,videodev,mc,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "68717C4A9D9A1C081FF8F20");
