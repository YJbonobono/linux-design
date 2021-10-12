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
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x9dd83b26, "v4l2_event_queue" },
	{ 0x68622281, "v4l2_ctrl_log_status" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0xe76ff4c, "v4l2_subdev_call_wrappers" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0xfc71cdba, "v4l2_ctrl_g_ctrl" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xf1ea0797, "vb2_fop_poll" },
	{ 0x7bf1cf39, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xe06c1380, "vb2_ops_wait_prepare" },
	{ 0x86a54209, "__video_register_device" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdd64e639, "strscpy" },
	{ 0x4fba9d41, "snd_card_disconnect" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0xcb135cd9, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x471fa3b1, "v4l2_ctrl_new_std_menu" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x63c4ae47, "vb2_vmalloc_memops" },
	{ 0x3dd0f9ef, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xcd915485, "vb2_fop_mmap" },
	{ 0x57f95d83, "vb2_ioctl_qbuf" },
	{ 0xf3ac10ea, "v4l2_event_subscribe" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0x1f8e5975, "v4l2_ctrl_subscribe_event" },
	{ 0x7bd2de6a, "vb2_plane_vaddr" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0x77de4c71, "snd_card_free_when_closed" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2b61baf1, "v4l2_ctrl_new_custom" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x63294a0f, "vb2_ioctl_dqbuf" },
	{ 0x99b01350, "__v4l2_ctrl_grab" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x700ce568, "snd_card_new" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x336a7ddf, "vb2_fop_release" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x80420d96, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x12d77256, "vb2_ops_wait_finish" },
	{ 0x9601035f, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xfcfef8e1, "v4l2_i2c_new_subdev_board" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0xb0e602eb, "memmove" },
	{ 0x220493ec, "vmalloc_to_page" },
	{ 0xd54d9bcb, "vb2_ioctl_streamoff" },
	{ 0x6ffb984, "v4l2_device_put" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0x9461543d, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,snd-pcm,snd,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "BCEF12CAAFD7094605C3D18");
