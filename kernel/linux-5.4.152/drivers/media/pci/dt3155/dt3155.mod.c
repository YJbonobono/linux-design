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
	{ 0xcb135cd9, "vb2_fop_read" },
	{ 0xd54d9bcb, "vb2_ioctl_streamoff" },
	{ 0x7bf1cf39, "vb2_ioctl_streamon" },
	{ 0x25987266, "vb2_ioctl_create_bufs" },
	{ 0x63294a0f, "vb2_ioctl_dqbuf" },
	{ 0xa8828321, "vb2_ioctl_expbuf" },
	{ 0x57f95d83, "vb2_ioctl_qbuf" },
	{ 0x80420d96, "vb2_ioctl_querybuf" },
	{ 0xc2f98784, "vb2_ioctl_reqbufs" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x86a54209, "__video_register_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xc67ffbce, "pci_request_region" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x9461543d, "vb2_queue_init" },
	{ 0xee69c99a, "vb2_dma_contig_memops" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xc1a9cf87, "vb2_plane_cookie" },
	{ 0xe484e35f, "ioread32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x9b130b11, "pci_release_region" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0xc1f208fd, "vb2_queue_release" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-dma-contig,videobuf2-common");

MODULE_ALIAS("pci:v00008086d00001223sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B8F9A31562DE3532EF28EF4");
