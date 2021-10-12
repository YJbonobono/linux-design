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
	{ 0x4da9dda0, "i2400m_cmd_enter_powersave" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x46c9696e, "i2400m_dev_reset_handle" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0x924d91a2, "debugfs_create_u8" },
	{ 0x5bafa8fd, "usb_init_urb" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x71a859f9, "i2400m_tx_msg_get" },
	{ 0xf2fe3ad3, "i2400m_rx" },
	{ 0xadebce6f, "usb_autopm_get_interface" },
	{ 0x85df9b6c, "strsep" },
	{ 0xefb22ee3, "usb_enable_autosuspend" },
	{ 0x97da3b07, "usb_get_urb" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x66d230ae, "param_ops_string" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x75f70d88, "i2400m_setup" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xac014b9b, "i2400m_is_boot_barker" },
	{ 0x5b1a4549, "i2400m_post_reset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x34fa24ae, "debugfs_create_size_t" },
	{ 0x30c76023, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5792f848, "strlcpy" },
	{ 0x162fd64c, "i2400m_netdev_setup" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xcf13b7a6, "i2400m_unknown_barker" },
	{ 0x6cf0f55c, "i2400m_pre_reset" },
	{ 0x825f1409, "usb_queue_reset_device" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xbecfaee9, "skb_copy_expand" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x95902c1, "usb_reset_device" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x7e82aa1a, "usb_clear_halt" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb00b793c, "i2400m_bm_cmd_prepare" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc4764df3, "i2400m_release" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xd9c26a42, "i2400m_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x8fb8c041, "i2400m_tx_msg_sent" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x65e08be7, "usb_autopm_put_interface" },
	{ 0x11b21377, "usb_alloc_urb" },
};

MODULE_INFO(depends, "i2400m");

MODULE_ALIAS("usb:v8086p0186d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8087p07D6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8087p07D7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8087p07D9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0181d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1405d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0180d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0182d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1406d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1403d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0234F85B691422B922C97D2");
