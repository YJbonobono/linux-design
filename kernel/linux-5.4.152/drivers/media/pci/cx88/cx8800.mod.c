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
	{ 0xa24f23d8, "__request_module" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9dc7942d, "v4l2_event_unsubscribe" },
	{ 0x1d676918, "cx88_newstation" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xd574499e, "v4l2_i2c_new_subdev" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xf1ea0797, "vb2_fop_poll" },
	{ 0x7bf1cf39, "vb2_ioctl_streamon" },
	{ 0xe06c1380, "vb2_ops_wait_prepare" },
	{ 0x86a54209, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xb3a09e2, "cx88_sram_channel_setup" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x1c3a419c, "cx88_sram_channel_dump" },
	{ 0xcb135cd9, "vb2_fop_read" },
	{ 0x3db43863, "cx88_set_tvaudio" },
	{ 0x8d88137a, "cx88_sram_channels" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xcd915485, "vb2_fop_mmap" },
	{ 0x57f95d83, "vb2_ioctl_qbuf" },
	{ 0xc5850110, "printk" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x1f8e5975, "v4l2_ctrl_subscribe_event" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0xb3e347a9, "cx88_set_stereo" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xde3cf6f1, "v4l2_fh_release" },
	{ 0x819fba5a, "cx88_risc_buffer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x63294a0f, "vb2_ioctl_dqbuf" },
	{ 0xc1a9cf87, "vb2_plane_cookie" },
	{ 0x257d42e1, "__v4l2_ctrl_s_ctrl" },
	{ 0xf5c29d07, "cx88_ir_start" },
	{ 0x39a24b60, "v4l2_ctrl_find" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x12a38747, "usleep_range" },
	{ 0x336a7ddf, "vb2_fop_release" },
	{ 0x242e020f, "cx88_set_tvnorm" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0x265d5bc8, "cx88_ir_stop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcc633cd1, "cx88_get_stereo" },
	{ 0x41bde8c7, "cx88_core_get" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe25ceaa4, "cx88_core_irq" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x904b8696, "cx88_audio_thread" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0xf1b26b78, "cx88_core_put" },
	{ 0x80420d96, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xbf6531d9, "cx88_vdev_init" },
	{ 0x3af6ce46, "cx88_shutdown" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x12d77256, "vb2_ops_wait_finish" },
	{ 0x3aa3fc45, "cx88_set_scale" },
	{ 0xfcfef8e1, "v4l2_i2c_new_subdev_board" },
	{ 0xec0c7ec2, "v4l2_ctrl_add_handler" },
	{ 0x5edb7ae5, "cx88_print_irqbits" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0xd54d9bcb, "vb2_ioctl_streamoff" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xc2e88bd6, "cx88_wakeup" },
	{ 0x99a00c20, "i2c_new_device" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0x48b1a3f7, "v4l2_ctrl_poll" },
	{ 0x46b50adf, "cx88_reset" },
	{ 0xc3000714, "vb2_dma_sg_memops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x9461543d, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,cx88xx,videobuf2-common,videobuf2-dma-sg");

MODULE_ALIAS("pci:v000014F1d00008800sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7564C5CFF128A8A982006BF");
