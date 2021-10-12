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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x63effe55, "param_ops_ushort" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xfcf2878, "usb_get_descriptor" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x7e82aa1a, "usb_clear_halt" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x51bd55b5, "completion_done" },
	{ 0xf9a482f9, "msleep" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0xa32150eb, "usb_alloc_coherent" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xe612df2f, "usb_get_status" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ca552d, "usb_free_coherent" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3033d39c, "usb_unlink_urb" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x29361773, "complete" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x468df55d, "usb_sg_wait" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9385fd16, "usb_sg_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbbffcddf, "usb_sg_cancel" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdfbdc769, "pv_ops" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0547p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p8613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vFFF0pFFF0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E74A530596F7B48338B2CBC");
