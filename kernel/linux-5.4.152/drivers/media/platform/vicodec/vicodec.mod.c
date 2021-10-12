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
	{ 0xa33bc6d0, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9dc7942d, "v4l2_event_unsubscribe" },
	{ 0xc3e9e4be, "v4l2_m2m_ioctl_dqbuf" },
	{ 0xcf0b70de, "v4l2_m2m_buf_copy_metadata" },
	{ 0x7dfb0a06, "v4l2_m2m_register_media_controller" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0xfc131f70, "v4l2_event_queue_fh" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xaf6e32c8, "v4l2_m2m_ctx_init" },
	{ 0x1f4f78c9, "v4l2_m2m_ioctl_try_encoder_cmd" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xe06c1380, "vb2_ops_wait_prepare" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0x86a54209, "__video_register_device" },
	{ 0x67f7eec3, "vb2_request_validate" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8eef8d2f, "v4l2_m2m_fop_mmap" },
	{ 0xdd64e639, "strscpy" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xdb193356, "vb2_request_object_is_buffer" },
	{ 0x563ff989, "v4l2_m2m_ioctl_streamon" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0xcf01ea9e, "v4l2_m2m_ioctl_create_bufs" },
	{ 0x63c4ae47, "vb2_vmalloc_memops" },
	{ 0xecee3444, "v4l2_m2m_last_buf" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xf3ac10ea, "v4l2_event_subscribe" },
	{ 0x1e01e671, "v4l2_m2m_ioctl_streamoff" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x6bd440dc, "v4l2_m2m_ioctl_reqbufs" },
	{ 0x13641ab3, "v4l2_fh_init" },
	{ 0x1f8e5975, "v4l2_ctrl_subscribe_event" },
	{ 0x7bd2de6a, "vb2_plane_vaddr" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0x6ad96cfa, "v4l2_ctrl_request_hdl_find" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf13ff84d, "v4l2_m2m_unregister_media_controller" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x2b61baf1, "v4l2_ctrl_new_custom" },
	{ 0xa07a37f0, "memchr" },
	{ 0xdd04603b, "vb2_request_buffer_cnt" },
	{ 0x1c7b0c7, "v4l2_ctrl_request_setup" },
	{ 0xf859adf1, "media_device_cleanup" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x95412724, "v4l2_m2m_get_vq" },
	{ 0x42158fde, "media_request_object_put" },
	{ 0x9db59463, "v4l2_m2m_ioctl_qbuf" },
	{ 0x9570732b, "platform_device_register" },
	{ 0x750c3d7b, "v4l2_ctrl_request_complete" },
	{ 0xd048a0e5, "v4l2_m2m_fop_poll" },
	{ 0xddcaccd2, "v4l2_m2m_ioctl_try_decoder_cmd" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa54716ea, "v4l2_m2m_buf_queue" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0x1f9f1a1a, "v4l2_m2m_request_queue" },
	{ 0xef3ecac6, "v4l2_m2m_ioctl_querybuf" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xcd9b7720, "v4l2_m2m_ioctl_expbuf" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9806b83a, "vb2_find_timestamp" },
	{ 0x7394a437, "v4l2_ctrl_request_hdl_ctrl_find" },
	{ 0xfdc284ce, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x2f15b979, "v4l2_m2m_buf_remove" },
	{ 0x12d77256, "vb2_ops_wait_finish" },
	{ 0xd98fb5d6, "v4l2_fh_add" },
	{ 0x6f0a780e, "v4l2_m2m_ctx_release" },
	{ 0x930cd6e2, "v4l2_fh_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6c73b2d6, "media_device_init" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x6ffb984, "v4l2_device_put" },
	{ 0x40d97d07, "v4l2_m2m_next_buf" },
	{ 0xdbd288d6, "media_device_unregister" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0xe3389f9f, "v4l2_m2m_job_finish" },
	{ 0xb4001ace, "v4l2_fh_exit" },
	{ 0x9461543d, "vb2_queue_init" },
	{ 0x730f2eae, "v4l2_m2m_init" },
};

MODULE_INFO(depends, "v4l2-mem2mem,videodev,videobuf2-v4l2,videobuf2-common,videobuf2-vmalloc,mc");


MODULE_INFO(srcversion, "F3B25C04ED10097129DF116");
