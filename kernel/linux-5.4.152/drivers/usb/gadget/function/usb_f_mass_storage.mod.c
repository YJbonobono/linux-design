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
	{ 0x257d4615, "kernel_write" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xac86cd23, "usb_gstrings_attach" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0x53b954a2, "up_read" },
	{ 0xd25e864c, "usb_free_all_descriptors" },
	{ 0x4551977, "dequeue_signal" },
	{ 0x349cba85, "strchr" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0x754d539c, "strlen" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x94816c92, "usb_ep_set_wedge" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb3051965, "config_item_put" },
	{ 0x5ec55d8, "file_path" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xce544cea, "vfs_fsync" },
	{ 0x40f79de7, "usb_ep_set_halt" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x531c923b, "usb_function_unregister" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xc78529be, "kernel_read" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xe5a01321, "device_register" },
	{ 0xb1fa40bb, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0xa263ce82, "freezing_slow_path" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x933a8461, "unregister_gadget_item" },
	{ 0xc5850110, "printk" },
	{ 0x5e445b6f, "usb_ep_autoconfig" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0x63e14d80, "usb_ep_clear_halt" },
	{ 0xce807a25, "up_write" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa164179, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9b9e4645, "usb_function_register" },
	{ 0x37e705ce, "usb_composite_setup_continue" },
	{ 0xc8ea074a, "usb_ep_dequeue" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x8a880b04, "config_ep_by_speed" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xdfecd092, "send_sig_info" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xf0033743, "invalidate_mapping_pages" },
	{ 0xf53738b, "usb_assign_descriptors" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4981fa7b, "usb_interface_id" },
	{ 0x51ce92, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x28db880d, "dev_set_name" },
	{ 0x5591473d, "usb_ep_fifo_flush" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x7bd2c122, "filp_open" },
};

MODULE_INFO(depends, "libcomposite,udc-core");


MODULE_INFO(srcversion, "BD8A056D384105E9FDAE8CC");
