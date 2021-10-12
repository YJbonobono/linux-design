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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x49a487fc, "usbip_event_happened" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x130cd486, "usb_create_shared_hcd" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0xb8cc585b, "kernel_sendmsg" },
	{ 0x6760ebc5, "sockfd_lookup" },
	{ 0x7c5af92b, "usb_add_hcd" },
	{ 0x349cba85, "strchr" },
	{ 0x8e47018c, "usb_remove_hcd" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x96dbd846, "usb_create_hcd" },
	{ 0x29aaed00, "usb_hcd_poll_rh_status" },
	{ 0xb2c89758, "usbip_alloc_iso_desc_pdu" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc848d5d6, "usb_hcd_giveback_urb" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfed34a2e, "usb_put_hcd" },
	{ 0xce93e878, "usbip_event_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x63b3c8bd, "usb_hcd_is_primary_hcd" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x73a0ebd4, "usb_hcd_link_urb_to_ep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xb1d86bc1, "platform_device_del" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc3556e50, "kernel_sock_shutdown" },
	{ 0x7511f9f9, "usbip_stop_eh" },
	{ 0x3cb46f85, "dev_attr_usbip_debug" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xb79c798, "sysfs_remove_link" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa164179, "fput" },
	{ 0x804ef382, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x39fe5078, "usbip_pad_iso" },
	{ 0x4ac94403, "usb_hcd_check_unlink_urb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xee186d06, "usbip_dump_urb" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0xdcd03555, "usbip_recv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbfd65e63, "platform_bus" },
	{ 0x78fb0a28, "platform_device_add_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0x8043226d, "usbip_recv_xbuff" },
	{ 0x6b8208a9, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xb813b1c9, "usb_hcd_unlink_urb_from_ep" },
	{ 0xdc99c78d, "usb_hcd_resume_root_hub" },
	{ 0x867cbbc6, "usbip_start_eh" },
	{ 0x623ba8bf, "usbip_pack_pdu" },
	{ 0xe6852960, "platform_device_put" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "F715FD76638E24FF10BDBA2");
