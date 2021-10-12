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
	{ 0x9dc7942d, "v4l2_event_unsubscribe" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x9dd83b26, "v4l2_event_queue" },
	{ 0x68622281, "v4l2_ctrl_log_status" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xf1ea0797, "vb2_fop_poll" },
	{ 0x7bf1cf39, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0xe06c1380, "vb2_ops_wait_prepare" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x86a54209, "__video_register_device" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0xcb135cd9, "vb2_fop_read" },
	{ 0x471fa3b1, "v4l2_ctrl_new_std_menu" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xcd915485, "vb2_fop_mmap" },
	{ 0x57f95d83, "vb2_ioctl_qbuf" },
	{ 0xf3ac10ea, "v4l2_event_subscribe" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x1f8e5975, "v4l2_ctrl_subscribe_event" },
	{ 0x7bd2de6a, "vb2_plane_vaddr" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2b61baf1, "v4l2_ctrl_new_custom" },
	{ 0x25987266, "vb2_ioctl_create_bufs" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf271f57a, "devm_kfree" },
	{ 0x63294a0f, "vb2_ioctl_dqbuf" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x336a7ddf, "vb2_fop_release" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0x80420d96, "vb2_ioctl_querybuf" },
	{ 0xee69c99a, "vb2_dma_contig_memops" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x12d77256, "vb2_ops_wait_finish" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa8828321, "vb2_ioctl_expbuf" },
	{ 0xd54d9bcb, "vb2_ioctl_streamoff" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xc1f208fd, "vb2_queue_release" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x9461543d, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-dma-contig");


MODULE_INFO(srcversion, "A7AE32824B8CDA524F3534E");
