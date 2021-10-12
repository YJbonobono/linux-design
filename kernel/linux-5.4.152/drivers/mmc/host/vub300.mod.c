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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x9601035f, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x95902c1, "usb_reset_device" },
	{ 0xbe8490bc, "usb_lock_device_for_reset" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x468df55d, "usb_sg_wait" },
	{ 0x9385fd16, "usb_sg_init" },
	{ 0xfb578fc5, "memset" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xe7363a56, "mmc_request_done" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc5850110, "printk" },
	{ 0xed46adb4, "mmc_remove_host" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb9a3671e, "mmc_detect_change" },
	{ 0x9166fada, "strncpy" },
	{ 0x130b568, "wake_up_process" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x29361773, "complete" },
	{ 0x3033d39c, "usb_unlink_urb" },
	{ 0xbbffcddf, "usb_sg_cancel" },
	{ 0x3d75c109, "mmc_add_host" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x95ee7d3a, "mmc_alloc_host" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x5052ba6b, "usb_string" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xd20e0112, "mmc_free_host" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v2201p012Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p012Cd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "49C7D8C7FEDC3301E9524A3");
