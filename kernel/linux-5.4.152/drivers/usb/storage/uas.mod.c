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
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0x57ca0bde, "usb_stor_adjust_quirks" },
	{ 0x1bc3edc2, "usb_stor_sense_invalidCDB" },
	{ 0x3033d39c, "usb_unlink_urb" },
	{ 0xaaef1481, "sdev_prefix_printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7972de4f, "usb_unanchor_urb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xed247193, "usb_anchor_urb" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x903cda76, "blk_queue_max_hw_sectors" },
	{ 0xbf499271, "blk_queue_update_dma_alignment" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbe8490bc, "usb_lock_device_for_reset" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ecbf543, "scsi_report_bus_reset" },
	{ 0xc0e1b182, "usb_alloc_streams" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x97da3b07, "usb_get_urb" },
	{ 0xb7964a42, "scsi_change_queue_depth" },
	{ 0x9afab2c6, "scsi_is_host_device" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xf9453a86, "scsi_print_command" },
	{ 0xff414f9b, "scmd_printk" },
	{ 0x1db69593, "scsi_unblock_requests" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x66797b9b, "scsi_block_requests" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x95902c1, "usb_reset_device" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0x15af7f4, "system_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc6355fae, "usb_free_streams" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v054Cp087Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v059Fp105Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v059Fp1061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0984p0301d0128dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p331Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13FDp3940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0539d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0567d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0578d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v154BpF00Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v154BpF00Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2109p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2537p1068d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v357Dp7788d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p1012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip62in*");

MODULE_INFO(srcversion, "47890C34056A676F1DEC17A");
