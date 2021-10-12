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
	{ 0x2d3385d3, "system_wq" },
	{ 0xd62fc4d6, "cdev_del" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x3d0221e2, "cdev_init" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x361fe89f, "device_destroy" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xffb7c514, "ida_free" },
	{ 0x9166fada, "strncpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x74957e8f, "greybus_register_driver" },
	{ 0x5191cd36, "greybus_deregister_driver" },
	{ 0x9a9cd14e, "device_create" },
	{ 0x26b4912b, "gb_operation_sync_timeout" },
	{ 0xd9cb0c17, "gb_connection_destroy" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x97d452, "cdev_add" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x73916598, "gb_operation_request_send_sync_timeout" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xcf83c7f2, "gb_connection_enable" },
	{ 0x5ad2fb4e, "gb_operation_response_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cdc949, "gb_spilib_master_init" },
	{ 0x6cd7ba9, "gb_connection_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0x67e46949, "gb_connection_disable" },
	{ 0xc0cca725, "class_destroy" },
	{ 0x9601035f, "request_firmware" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x52977a3a, "__class_create" },
	{ 0xdd92a2e8, "gb_operation_get_payload_size_max" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xa63dbd09, "gb_operation_put" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xa76db6a, "gb_operation_create_flags" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xcb8510f5, "gb_spilib_master_exit" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xb3f4e253, "gb_interface_request_mode_switch" },
};

MODULE_INFO(depends, "greybus,gb-spilib");


MODULE_INFO(srcversion, "AB5D7751CE48BCA40DA081B");
