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
	{ 0x37dc0830, "videobuf_to_dma" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9dc7942d, "v4l2_event_unsubscribe" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4f8686b2, "videobuf_mmap_mapper" },
	{ 0x614dd5a, "v4l2_video_std_frame_period" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbabbce7b, "videobuf_queue_cancel" },
	{ 0xafac5671, "videobuf_streamon" },
	{ 0x86a54209, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x26992a28, "videobuf_iolock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd69a55d0, "saa7146_pgtable_free" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xcd1a7f0f, "saa7146_pgtable_alloc" },
	{ 0x3d932463, "videobuf_read_one" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xa347313f, "videobuf_qbuf" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x13641ab3, "v4l2_fh_init" },
	{ 0x1f8e5975, "v4l2_ctrl_subscribe_event" },
	{ 0x372bbd65, "saa7146_pgtable_build_single" },
	{ 0x7c12e8c8, "videobuf_querybuf" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xedbd058e, "videobuf_read_stream" },
	{ 0xb433a976, "videobuf_dma_unmap" },
	{ 0xaccbbb60, "videobuf_queue_sg_init" },
	{ 0xd2a94134, "videobuf_stop" },
	{ 0x3adbd595, "v4l2_field_names" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe3cd9b5c, "saa7146_debug" },
	{ 0xcf7755a4, "videobuf_dqbuf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x8e184a0e, "videobuf_waiton" },
	{ 0x37a0cba, "kfree" },
	{ 0xb516ee89, "videobuf_reqbufs" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0xd98fb5d6, "v4l2_fh_add" },
	{ 0x6f0fbe99, "videobuf_dma_free" },
	{ 0x930cd6e2, "v4l2_fh_del" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0x13d11be9, "videobuf_poll_stream" },
	{ 0x48b1a3f7, "v4l2_ctrl_poll" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xb4001ace, "v4l2_fh_exit" },
	{ 0x1dc19add, "videobuf_streamoff" },
};

MODULE_INFO(depends, "videobuf-dma-sg,videodev,videobuf-core,saa7146");


MODULE_INFO(srcversion, "470AF872693855FA11FC1F1");
