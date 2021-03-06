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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x85bd1608, "__request_region" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9dc7942d, "v4l2_event_unsubscribe" },
	{ 0x77ade3d0, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x55e9d0ec, "altera_ci_init" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xd574499e, "v4l2_i2c_new_subdev" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0xe76ff4c, "v4l2_subdev_call_wrappers" },
	{ 0x40950f58, "video_device_release" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x617097f2, "cx2341x_handler_set_50hz" },
	{ 0xd57a3992, "cx2341x_handler_init" },
	{ 0xfc71cdba, "v4l2_ctrl_g_ctrl" },
	{ 0xf2a353ac, "v4l2_i2c_tuner_addrs" },
	{ 0xf1ea0797, "vb2_fop_poll" },
	{ 0x7bf1cf39, "vb2_ioctl_streamon" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe06c1380, "vb2_ops_wait_prepare" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x86a54209, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x9ce620ed, "i2c_new_probed_device" },
	{ 0x52d0e934, "vb2_dvb_unregister_bus" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x4e818077, "rc_allocate_device" },
	{ 0x8c9b2a4b, "dvb_ca_en50221_camready_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0xcb135cd9, "vb2_fop_read" },
	{ 0x13dc096b, "vb2_dvb_dealloc_frontends" },
	{ 0x88a699d2, "dvb_ca_en50221_frda_irq" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xfb578fc5, "memset" },
	{ 0xaad38701, "rc_free_device" },
	{ 0x94e48364, "param_ops_short" },
	{ 0xeb2e67bc, "video_device_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xcd915485, "vb2_fop_mmap" },
	{ 0x57f95d83, "vb2_ioctl_qbuf" },
	{ 0xdb3faf38, "altera_ci_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0x1f8e5975, "v4l2_ctrl_subscribe_event" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0xe66b9812, "altera_ci_irq" },
	{ 0xfaa9a0d6, "snd_pcm_hw_constraint_pow2" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xc4aa48, "rc_register_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb91779c2, "dvb_ca_en50221_release" },
	{ 0x128f9491, "vb2_ioctl_prepare_buf" },
	{ 0x30017bfa, "tveeprom_read" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x2cc071a6, "i2c_unregister_device" },
	{ 0x63294a0f, "vb2_ioctl_dqbuf" },
	{ 0x6ff7510d, "altera_ci_tuner_reset" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x7334c487, "v4l2_device_unregister_subdev" },
	{ 0x700ce568, "snd_card_new" },
	{ 0xc1a9cf87, "vb2_plane_cookie" },
	{ 0x257d42e1, "__v4l2_ctrl_s_ctrl" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x39a24b60, "v4l2_ctrl_find" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb3293c3a, "cx2341x_handler_setup" },
	{ 0x12a38747, "usleep_range" },
	{ 0x336a7ddf, "vb2_fop_release" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xd0c189ae, "v4l2_ctrl_handler_log_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xabdf8cd1, "v4l2_device_register_subdev" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xe7d58cd8, "v4l2_i2c_subdev_addr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0xd0f22cfd, "v4l2_subdev_init" },
	{ 0x80420d96, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x9601035f, "request_firmware" },
	{ 0x12d77256, "vb2_ops_wait_finish" },
	{ 0xd4c9d9b8, "ir_raw_event_store" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0xc4a1cf1a, "i2c_probe_func_quick_read" },
	{ 0xec0c7ec2, "v4l2_ctrl_add_handler" },
	{ 0xd7974eb0, "tda18271_attach" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0xfcfd30b7, "vb2_dvb_alloc_frontend" },
	{ 0xcaa24a2, "vb2_dvb_get_frontend" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0xf0597981, "altera_init" },
	{ 0x349c7313, "dvb_ca_en50221_init" },
	{ 0x220493ec, "vmalloc_to_page" },
	{ 0xd54d9bcb, "vb2_ioctl_streamoff" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xc41422ca, "ir_raw_event_handle" },
	{ 0x99a00c20, "i2c_new_device" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xf3251e7b, "v4l2_norm_to_name" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0x2caa9928, "vb2_dvb_register_bus" },
	{ 0xc3000714, "vb2_dma_sg_memops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb037851, "m88ds3103_get_agc_pwm" },
	{ 0x9461543d, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,rc-core,altera-ci,snd-pcm,tveeprom,cx2341x,videobuf2-dvb,dvb-core,videobuf2-common,snd,tda18271,altera-stapl,videobuf2-dma-sg,m88ds3103");

MODULE_ALIAS("pci:v000014F1d00008852sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00008880sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "402139734FE3C910FD4C463");
