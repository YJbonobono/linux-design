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
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0xfc71cdba, "v4l2_ctrl_g_ctrl" },
	{ 0xf1ea0797, "vb2_fop_poll" },
	{ 0x7bf1cf39, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0xe06c1380, "vb2_ops_wait_prepare" },
	{ 0x86a54209, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0xcb135cd9, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xcea4c88b, "v4l2_device_disconnect" },
	{ 0x63c4ae47, "vb2_vmalloc_memops" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xcd915485, "vb2_fop_mmap" },
	{ 0x57f95d83, "vb2_ioctl_qbuf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0x1f8e5975, "v4l2_ctrl_subscribe_event" },
	{ 0x7bd2de6a, "vb2_plane_vaddr" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x25987266, "vb2_ioctl_create_bufs" },
	{ 0x3ca552d, "usb_free_coherent" },
	{ 0x63294a0f, "vb2_ioctl_dqbuf" },
	{ 0x257d42e1, "__v4l2_ctrl_s_ctrl" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x336a7ddf, "vb2_fop_release" },
	{ 0xad8417dc, "vb2_queue_error" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0x7e82aa1a, "usb_clear_halt" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0x80420d96, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x12d77256, "vb2_ops_wait_finish" },
	{ 0x2a771f85, "usb_ifnum_to_if" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa8828321, "vb2_ioctl_expbuf" },
	{ 0xa32150eb, "usb_alloc_coherent" },
	{ 0xd54d9bcb, "vb2_ioctl_streamoff" },
	{ 0x6ffb984, "v4l2_device_put" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x9461543d, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "9E23CCDB925F1C676E43D73");
