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
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x49a487fc, "usbip_event_happened" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x840342c6, "sgl_free" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0xb8cc585b, "kernel_sendmsg" },
	{ 0x6760ebc5, "sockfd_lookup" },
	{ 0x754d539c, "strlen" },
	{ 0xd800eea, "usb_set_configuration" },
	{ 0xb2c89758, "usbip_alloc_iso_desc_pdu" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3ede7328, "usb_hub_claim_port" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3033d39c, "usb_unlink_urb" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0xce93e878, "usbip_event_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0xe72376b5, "usbip_in_eh" },
	{ 0xbe8490bc, "usb_lock_device_for_reset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5a921311, "strncmp" },
	{ 0x22583123, "usb_register_device_driver" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc3556e50, "kernel_sock_shutdown" },
	{ 0x97c17ef1, "device_attach" },
	{ 0x7511f9f9, "usbip_stop_eh" },
	{ 0x3cb46f85, "dev_attr_usbip_debug" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa164179, "fput" },
	{ 0x804ef382, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xee186d06, "usbip_dump_urb" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0x3a13f54a, "sgl_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0x1e487b2f, "driver_create_file" },
	{ 0xdcd03555, "usbip_recv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x95902c1, "usb_reset_device" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x7e82aa1a, "usb_clear_halt" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x57c3d367, "usb_deregister_device_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8043226d, "usbip_recv_xbuff" },
	{ 0xf0951930, "usb_hub_release_port" },
	{ 0x6b8208a9, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc2b6c2f1, "driver_remove_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x867cbbc6, "usbip_start_eh" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x623ba8bf, "usbip_pack_pdu" },
	{ 0x11b21377, "usb_alloc_urb" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "5BEEB2ECF996ABB1D9A73A2");
