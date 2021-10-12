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
	{ 0x336a7ddf, "vb2_fop_release" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0xcd915485, "vb2_fop_mmap" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0xf1ea0797, "vb2_fop_poll" },
	{ 0xcb135cd9, "vb2_fop_read" },
	{ 0x12d77256, "vb2_ops_wait_finish" },
	{ 0xe06c1380, "vb2_ops_wait_prepare" },
	{ 0xd54d9bcb, "vb2_ioctl_streamoff" },
	{ 0x7bf1cf39, "vb2_ioctl_streamon" },
	{ 0x25987266, "vb2_ioctl_create_bufs" },
	{ 0x63294a0f, "vb2_ioctl_dqbuf" },
	{ 0xa8828321, "vb2_ioctl_expbuf" },
	{ 0x57f95d83, "vb2_ioctl_qbuf" },
	{ 0x80420d96, "vb2_ioctl_querybuf" },
	{ 0xc2f98784, "vb2_ioctl_reqbufs" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x8b29215e, "input_mt_init_slots" },
	{ 0x3cb1a279, "input_alloc_absinfo" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0x86a54209, "__video_register_device" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0x9461543d, "vb2_queue_init" },
	{ 0x63c4ae47, "vb2_vmalloc_memops" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0x7bd2de6a, "vb2_plane_vaddr" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x9601035f, "request_firmware" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xf36d80ec, "device_property_present" },
	{ 0xefd4ff6, "request_firmware_nowait" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x29361773, "complete" },
	{ 0x466e2fb6, "input_mt_report_slot_state" },
	{ 0xf8c679e2, "input_event" },
	{ 0x2459cf37, "input_mt_report_pointer_emulation" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("i2c:qt602240_ts");
MODULE_ALIAS("i2c:atmel_mxt_ts");
MODULE_ALIAS("i2c:atmel_mxt_tp");
MODULE_ALIAS("i2c:maxtouch");
MODULE_ALIAS("i2c:mXT224");
MODULE_ALIAS("acpi*:ATML0000:*");
MODULE_ALIAS("acpi*:ATML0001:*");
MODULE_ALIAS("of:N*T*Catmel,maxtouch");
MODULE_ALIAS("of:N*T*Catmel,maxtouchC*");
MODULE_ALIAS("of:N*T*Catmel,qt602240_ts");
MODULE_ALIAS("of:N*T*Catmel,qt602240_tsC*");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_ts");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tsC*");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tp");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tpC*");
MODULE_ALIAS("of:N*T*Catmel,mXT224");
MODULE_ALIAS("of:N*T*Catmel,mXT224C*");

MODULE_INFO(srcversion, "E6BAE1E69190FF0000A2856");
