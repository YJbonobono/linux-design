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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x13caabab, "noop_llseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x186ea1fd, "class_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x2943c3cb, "scsi_register_driver" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x94567929, "__class_register" },
	{ 0x1cbc34b6, "scsi_device_get" },
	{ 0x20978fb9, "idr_find" },
	{ 0x1320e655, "blk_put_queue" },
	{ 0x37ba08b4, "sysfs_create_link" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x42aca45d, "blk_get_queue" },
	{ 0x63587d8d, "__alloc_disk_node" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xed71a6c, "scsi_autopm_get_device" },
	{ 0xbb9a4483, "scsi_autopm_put_device" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8ea97437, "scsi_device_put" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb0e602eb, "memmove" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x71dc307b, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xfb578fc5, "memset" },
	{ 0x2c96b1b5, "get_user_pages_fast" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x65815fbc, "blk_queue_rq_timeout" },
	{ 0x458edcfa, "scsi_ioctl" },
	{ 0x3449ae63, "scsi_cmd_ioctl" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb65152bd, "scsi_ioctl_block_when_processing_errors" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x1b90fc16, "scsi_block_when_processing_errors" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x6006847, "current_task" },
	{ 0x78984beb, "blk_rq_map_user" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x103eea0, "blk_execute_rq_nowait" },
	{ 0x69acdf38, "memcpy" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x9cb4da82, "blk_get_request" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0x184a3a43, "__scsi_print_sense" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0xfe1643a0, "blk_put_request" },
	{ 0x3c736115, "blk_rq_unmap_user" },
	{ 0x29361773, "complete" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x57afa8d1, "scsi_set_medium_removal" },
	{ 0xaaef1481, "sdev_prefix_printk" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a9cd14e, "device_create" },
	{ 0x97d452, "cdev_add" },
	{ 0x54e49788, "cdev_alloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x51ce92, "device_unregister" },
	{ 0xd62fc4d6, "cdev_del" },
	{ 0xb79c798, "sysfs_remove_link" },
	{ 0x861cd726, "put_disk" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcd75238, "__free_pages" },
	{ 0x96848186, "scnprintf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8E0D631EDBF5B44F67ED6C7");
