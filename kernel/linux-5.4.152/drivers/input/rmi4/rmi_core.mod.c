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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x55353855, "bus_register" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x34e0549f, "driver_register" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0xf1ea0797, "vb2_fop_poll" },
	{ 0x3cb1a279, "input_alloc_absinfo" },
	{ 0x97c8a653, "irq_find_mapping" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7bf1cf39, "vb2_ioctl_streamon" },
	{ 0x6d109050, "irq_create_mapping_affinity" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xe06c1380, "vb2_ops_wait_prepare" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x86a54209, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x49c89b60, "serio_interrupt" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x4dded074, "devm_kasprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xcb135cd9, "vb2_fop_read" },
	{ 0xf8c679e2, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcdb4aa41, "serio_unregister_port" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xd82577e1, "__irq_domain_add" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x63c4ae47, "vb2_vmalloc_memops" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xb2f0f1ff, "device_del" },
	{ 0xcd915485, "vb2_fop_mmap" },
	{ 0x57f95d83, "vb2_ioctl_qbuf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x7bd2de6a, "vb2_plane_vaddr" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0x9166fada, "strncpy" },
	{ 0x5792f848, "strlcpy" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x110512c7, "irq_get_irq_data" },
	{ 0x8b29215e, "input_mt_init_slots" },
	{ 0x335e4ce6, "device_add" },
	{ 0x25987266, "vb2_ioctl_create_bufs" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf271f57a, "devm_kfree" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0x63294a0f, "vb2_ioctl_dqbuf" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb8bd1db6, "handle_simple_irq" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0x336a7ddf, "vb2_fop_release" },
	{ 0xfb0c6b14, "put_device" },
	{ 0x270ac3e, "irq_set_chip_and_handler_name" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xda4a11d8, "irq_domain_simple_ops" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x55d56a61, "__serio_register_port" },
	{ 0x80420d96, "vb2_ioctl_querybuf" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0x466e2fb6, "input_mt_report_slot_state" },
	{ 0x96848186, "scnprintf" },
	{ 0x9601035f, "request_firmware" },
	{ 0x12d77256, "vb2_ops_wait_finish" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xe59971bb, "irq_domain_remove" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x9b53b2d5, "input_mt_sync_frame" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa8828321, "vb2_ioctl_expbuf" },
	{ 0x28db880d, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd54d9bcb, "vb2_ioctl_streamoff" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0xc85b1578, "input_mt_assign_slots" },
	{ 0x9461543d, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "12C386ABB6927AF5C4FCB48");
