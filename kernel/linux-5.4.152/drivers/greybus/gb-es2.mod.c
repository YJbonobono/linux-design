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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x74ed25ff, "gb_hd_cport_release_reserved" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x97da3b07, "usb_get_urb" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf4415429, "greybus_data_rcvd" },
	{ 0xf9ca2eb4, "kstrtoint_from_user" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x442541b, "__tracepoint_gb_message_submit" },
	{ 0x2c63a9d1, "greybus_message_sent" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x408868f5, "gb_hd_del" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xe97bc50a, "gb_debugfs_get" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xb76e86e0, "gb_hd_create" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x74515ac0, "gb_hd_add" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x235e03c4, "gb_hd_cport_reserve" },
	{ 0x828b59ad, "gb_hd_put" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x11b21377, "usb_alloc_urb" },
};

MODULE_INFO(depends, "greybus");

MODULE_ALIAS("usb:v18D1p1EAFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B3CDFB223E21AE67F77982E");
