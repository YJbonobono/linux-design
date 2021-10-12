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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x1e01e671, "v4l2_m2m_ioctl_streamoff" },
	{ 0xa33bc6d0, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0xc3e9e4be, "v4l2_m2m_ioctl_dqbuf" },
	{ 0xcd9b7720, "v4l2_m2m_ioctl_expbuf" },
	{ 0x9db59463, "v4l2_m2m_ioctl_qbuf" },
	{ 0xef3ecac6, "v4l2_m2m_ioctl_querybuf" },
	{ 0x6bd440dc, "v4l2_m2m_ioctl_reqbufs" },
	{ 0x12d77256, "vb2_ops_wait_finish" },
	{ 0xe06c1380, "vb2_ops_wait_prepare" },
	{ 0x8eef8d2f, "v4l2_m2m_fop_mmap" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0xd048a0e5, "v4l2_m2m_fop_poll" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x730f2eae, "v4l2_m2m_init" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x86a54209, "__video_register_device" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0x5f47b51b, "__dma_request_channel" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x9461543d, "vb2_queue_init" },
	{ 0xee69c99a, "vb2_dma_contig_memops" },
	{ 0x95412724, "v4l2_m2m_get_vq" },
	{ 0xd98fb5d6, "v4l2_fh_add" },
	{ 0xaf6e32c8, "v4l2_m2m_ctx_init" },
	{ 0x13641ab3, "v4l2_fh_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xa54716ea, "v4l2_m2m_buf_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x6f0a780e, "v4l2_m2m_ctx_release" },
	{ 0xb4001ace, "v4l2_fh_exit" },
	{ 0x930cd6e2, "v4l2_fh_del" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xdd64e639, "strscpy" },
	{ 0xbc7c8b6b, "v4l2_m2m_streamon" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc1a9cf87, "vb2_plane_cookie" },
	{ 0x40d97d07, "v4l2_m2m_next_buf" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0x2f15b979, "v4l2_m2m_buf_remove" },
	{ 0xe3389f9f, "v4l2_m2m_job_finish" },
	{ 0xc5bbcaca, "dma_release_channel" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "v4l2-mem2mem,videobuf2-v4l2,videodev,videobuf2-dma-contig,videobuf2-common");


MODULE_INFO(srcversion, "E951E0115938853FA9296B1");
