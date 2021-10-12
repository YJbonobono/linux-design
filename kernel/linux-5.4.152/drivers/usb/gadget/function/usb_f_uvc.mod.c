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
	{ 0x7e83fb8, "device_remove_file" },
	{ 0xcfd2d8b7, "usb_function_deactivate" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9dc7942d, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x29d3abe4, "usb_ep_autoconfig_ss" },
	{ 0xac86cd23, "usb_gstrings_attach" },
	{ 0xd25e864c, "usb_free_all_descriptors" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0x9dd83b26, "v4l2_event_queue" },
	{ 0x38b78979, "vb2_mmap" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb3051965, "config_item_put" },
	{ 0xe06c1380, "vb2_ops_wait_prepare" },
	{ 0x86a54209, "__video_register_device" },
	{ 0x3ae394fc, "config_item_init_type_name" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x40f79de7, "usb_ep_set_halt" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x531c923b, "usb_function_unregister" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0xaa47016f, "usb_function_activate" },
	{ 0x63c4ae47, "vb2_vmalloc_memops" },
	{ 0xb1fa40bb, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf3ac10ea, "v4l2_event_subscribe" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x5e445b6f, "usb_ep_autoconfig" },
	{ 0x13641ab3, "v4l2_fh_init" },
	{ 0x7bd2de6a, "vb2_plane_vaddr" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x5792f848, "strlcpy" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5e78a45e, "vb2_qbuf" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0xe3a53f4c, "sort" },
	{ 0x9f06453d, "vb2_querybuf" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9b9e4645, "usb_function_register" },
	{ 0x37e705ce, "usb_composite_setup_continue" },
	{ 0xa976fc36, "device_create_file" },
	{ 0xc8ea074a, "usb_ep_dequeue" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xcad8c922, "vb2_streamon" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8a880b04, "config_ep_by_speed" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x5b64ca25, "vb2_reqbufs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6dff86b8, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x12d77256, "vb2_ops_wait_finish" },
	{ 0xd98fb5d6, "v4l2_fh_add" },
	{ 0x4981fa7b, "usb_interface_id" },
	{ 0x930cd6e2, "v4l2_fh_del" },
	{ 0x8de249f7, "vb2_poll" },
	{ 0xc1f208fd, "vb2_queue_release" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x427c4c79, "config_group_find_item" },
	{ 0x2c1b5ba8, "vb2_streamoff" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0xb4001ace, "v4l2_fh_exit" },
	{ 0x9461543d, "vb2_queue_init" },
};

MODULE_INFO(depends, "libcomposite,videodev,udc-core,videobuf2-common,videobuf2-v4l2,videobuf2-vmalloc");


MODULE_INFO(srcversion, "1C19C072199B5B93920C71D");
