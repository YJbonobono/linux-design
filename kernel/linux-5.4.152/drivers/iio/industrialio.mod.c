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
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0x55353855, "bus_register" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3d0221e2, "cdev_init" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x78dbf18f, "irq_set_chip" },
	{ 0x3eff9935, "__irq_set_handler" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x463d8290, "__irq_alloc_descs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xf20a3aa8, "devres_alloc_node" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xb2f0f1ff, "device_del" },
	{ 0x6006847, "current_task" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd61eeee, "__bitmap_subset" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x306a8430, "device_property_read_string_array" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x13caabab, "noop_llseek" },
	{ 0x1cb2c6d8, "kvasprintf" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x335e4ce6, "device_add" },
	{ 0xb4facf8b, "simple_open" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xf5e7ea40, "ktime_get_coarse_ts64" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x406c4cb1, "hrtimer_resolution" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb8bd1db6, "handle_simple_irq" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x1c5b1f28, "irq_free_descs" },
	{ 0xf5f515cb, "devres_release" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6f5129d4, "anon_inode_getfd" },
	{ 0x1000e51, "schedule" },
	{ 0x66c5171f, "cdev_device_add" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf3e6402e, "__bitmap_equal" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7835fd59, "devres_add" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x3750a460, "get_device" },
	{ 0x6b347276, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0x96848186, "scnprintf" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x6cc5ecb4, "cdev_device_del" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xbcc15e75, "ktime_get_coarse_with_offset" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "792DE27C3DC60AF8A97D53E");
