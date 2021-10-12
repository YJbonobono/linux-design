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
	{ 0x12d77256, "vb2_ops_wait_finish" },
	{ 0xe06c1380, "vb2_ops_wait_prepare" },
	{ 0x336a7ddf, "vb2_fop_release" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0xcd915485, "vb2_fop_mmap" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0xf1ea0797, "vb2_fop_poll" },
	{ 0xd54d9bcb, "vb2_ioctl_streamoff" },
	{ 0x7bf1cf39, "vb2_ioctl_streamon" },
	{ 0x128f9491, "vb2_ioctl_prepare_buf" },
	{ 0x25987266, "vb2_ioctl_create_bufs" },
	{ 0x63294a0f, "vb2_ioctl_dqbuf" },
	{ 0xa8828321, "vb2_ioctl_expbuf" },
	{ 0x57f95d83, "vb2_ioctl_qbuf" },
	{ 0x80420d96, "vb2_ioctl_querybuf" },
	{ 0xc2f98784, "vb2_ioctl_reqbufs" },
	{ 0x6f45a7e6, "v4l2_event_subdev_unsubscribe" },
	{ 0xe2c65095, "v4l2_subdev_link_validate_default" },
	{ 0xab0573e7, "v4l2_subdev_link_validate" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xc5e2d0a4, "media_pipeline_start" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x4bf11f61, "pm_runtime_allow" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x8c6f0478, "v4l2_async_notifier_add_fwnode_remote_subdev" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x9861bead, "fwnode_handle_put" },
	{ 0x6d5c37eb, "v4l2_fwnode_endpoint_parse" },
	{ 0x2f10c851, "v4l2_async_notifier_register" },
	{ 0xa7d33cb1, "fwnode_graph_get_endpoint_by_id" },
	{ 0x7fd9c7c2, "dev_fwnode" },
	{ 0x9bbfcb27, "v4l2_async_notifier_init" },
	{ 0x86a54209, "__video_register_device" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0x9461543d, "vb2_queue_init" },
	{ 0xc3000714, "vb2_dma_sg_memops" },
	{ 0xabdf8cd1, "v4l2_device_register_subdev" },
	{ 0xd0f22cfd, "v4l2_subdev_init" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0xfdc284ce, "__media_device_register" },
	{ 0x6c73b2d6, "media_device_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd70fe06e, "pm_runtime_force_suspend" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9dd83b26, "v4l2_event_queue" },
	{ 0xf859adf1, "media_device_cleanup" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0x46573150, "v4l2_async_notifier_cleanup" },
	{ 0xbfac8b49, "v4l2_async_notifier_unregister" },
	{ 0xdbd288d6, "media_device_unregister" },
	{ 0x7334c487, "v4l2_device_unregister_subdev" },
	{ 0xc1f208fd, "vb2_queue_release" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x54bad0ef, "media_pipeline_stop" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb710a07d, "pm_runtime_force_resume" },
	{ 0xba3d2ff9, "v4l2_querymenu" },
	{ 0xfc71cdba, "v4l2_ctrl_g_ctrl" },
	{ 0x39a24b60, "v4l2_ctrl_find" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xe76ff4c, "v4l2_subdev_call_wrappers" },
	{ 0x92f150e0, "media_entity_remote_pad" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x9f6b27b, "v4l2_device_register_subdev_nodes" },
	{ 0x9326bd3d, "media_create_pad_link" },
	{ 0xf3ac10ea, "v4l2_event_subscribe" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcc445ceb, "__sg_page_iter_dma_next" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0xc1a9cf87, "vb2_plane_cookie" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0xdd64e639, "strscpy" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,mc,v4l2-fwnode,videobuf2-dma-sg,videobuf2-common");

MODULE_ALIAS("pci:v00008086d00009D32sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B8E3AA62EB356AAD7EB1EEF");
