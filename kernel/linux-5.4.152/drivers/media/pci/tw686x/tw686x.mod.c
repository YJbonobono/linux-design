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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x68622281, "v4l2_ctrl_log_status" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0x40950f58, "video_device_release" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xf1ea0797, "vb2_fop_poll" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x7bf1cf39, "vb2_ioctl_streamon" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe06c1380, "vb2_ops_wait_prepare" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x86a54209, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd2fda112, "snd_pcm_hw_constraint_integer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0xcb135cd9, "vb2_fop_read" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x63c4ae47, "vb2_vmalloc_memops" },
	{ 0xeb2e67bc, "video_device_alloc" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xcd915485, "vb2_fop_mmap" },
	{ 0x57f95d83, "vb2_ioctl_qbuf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0x1f8e5975, "v4l2_ctrl_subscribe_event" },
	{ 0x7bd2de6a, "vb2_plane_vaddr" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x128f9491, "vb2_ioctl_prepare_buf" },
	{ 0x7d5a28c9, "snd_pcm_lib_free_pages" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x25987266, "vb2_ioctl_create_bufs" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x63294a0f, "vb2_ioctl_dqbuf" },
	{ 0x28707648, "snd_pcm_lib_malloc_pages" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x700ce568, "snd_card_new" },
	{ 0xc1a9cf87, "vb2_plane_cookie" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x336a7ddf, "vb2_fop_release" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0x80420d96, "vb2_ioctl_querybuf" },
	{ 0xee69c99a, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x12d77256, "vb2_ops_wait_finish" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x45172700, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0xd54d9bcb, "vb2_ioctl_streamoff" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x6ffb984, "v4l2_device_put" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0xc3000714, "vb2_dma_sg_memops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9461543d, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,snd-pcm,videobuf2-vmalloc,videobuf2-common,snd,videobuf2-dma-contig,videobuf2-dma-sg");

MODULE_ALIAS("pci:v00001797d00006864sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001797d00006865sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001797d00006868sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001797d00006869sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "415A8661729907B7DD56C67");
