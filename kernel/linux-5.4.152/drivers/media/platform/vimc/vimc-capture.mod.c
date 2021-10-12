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
	{ 0x336a7ddf, "vb2_fop_release" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0xcd915485, "vb2_fop_mmap" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0xf1ea0797, "vb2_fop_poll" },
	{ 0xcb135cd9, "vb2_fop_read" },
	{ 0xd54d9bcb, "vb2_ioctl_streamoff" },
	{ 0x7bf1cf39, "vb2_ioctl_streamon" },
	{ 0x128f9491, "vb2_ioctl_prepare_buf" },
	{ 0x25987266, "vb2_ioctl_create_bufs" },
	{ 0x63294a0f, "vb2_ioctl_dqbuf" },
	{ 0xa8828321, "vb2_ioctl_expbuf" },
	{ 0x57f95d83, "vb2_ioctl_qbuf" },
	{ 0x80420d96, "vb2_ioctl_querybuf" },
	{ 0xc2f98784, "vb2_ioctl_reqbufs" },
	{ 0x12d77256, "vb2_ops_wait_finish" },
	{ 0xe06c1380, "vb2_ops_wait_prepare" },
	{ 0xe0f1650d, "vimc_link_validate" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7bd2de6a, "vb2_plane_vaddr" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc5e2d0a4, "media_pipeline_start" },
	{ 0x54bad0ef, "media_pipeline_stop" },
	{ 0x21e77bfa, "vimc_streamer_s_stream" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x86a54209, "__video_register_device" },
	{ 0x9461543d, "vb2_queue_init" },
	{ 0x63c4ae47, "vb2_vmalloc_memops" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0x57561542, "vimc_pads_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x5c0ba327, "component_add" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0xcfe2c150, "vimc_pix_map_by_index" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xf541e79b, "vimc_pix_map_by_code" },
	{ 0x37a0cba, "kfree" },
	{ 0x1f919ddf, "vimc_pix_map_by_pixelformat" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0xc1f208fd, "vb2_queue_release" },
	{ 0xf97ada41, "component_del" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,vimc,videobuf2-common,mc,videobuf2-vmalloc");

MODULE_ALIAS("platform:vimc-capture");

MODULE_INFO(srcversion, "31DF6D22812B6D90D7C9452");
