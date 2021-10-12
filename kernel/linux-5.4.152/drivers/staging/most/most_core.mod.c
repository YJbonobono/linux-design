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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x55353855, "bus_register" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x34e0549f, "driver_register" },
	{ 0x754d539c, "strlen" },
	{ 0xcf01e53d, "device_match_name" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3ae394fc, "config_item_init_type_name" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xdd64e639, "strscpy" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xe5a01321, "device_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0x81b59f6b, "configfs_register_subsystem" },
	{ 0x74d36c3b, "bus_find_device" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x4cce07e3, "bus_for_each_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x130b568, "wake_up_process" },
	{ 0x3d9dd6d3, "configfs_unregister_subsystem" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51ce92, "device_unregister" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x664f4f51, "config_group_init" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "86AC73DB80F7FDCDED5EEAC");
