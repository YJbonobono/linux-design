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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xc34b242b, "default_llseek" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x10c2c975, "usb_debug_root" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc17515d7, "usb_hcds_loaded" },
	{ 0xc5850110, "printk" },
	{ 0xf8c0536e, "device_wakeup_enable" },
	{ 0x7c5af92b, "usb_add_hcd" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xfedd2163, "clk_get" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0x96dbd846, "usb_create_hcd" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xdde949c7, "dma_pool_create" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x73a0ebd4, "usb_hcd_link_urb_to_ep" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xdc99c78d, "usb_hcd_resume_root_hub" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd30cfc7f, "usb_hc_died" },
	{ 0x29aaed00, "usb_hcd_poll_rh_status" },
	{ 0x4ac94403, "usb_hcd_check_unlink_urb" },
	{ 0x56470118, "__warn_printk" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc848d5d6, "usb_hcd_giveback_urb" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xb813b1c9, "usb_hcd_unlink_urb_from_ep" },
	{ 0x87b8798d, "sg_next" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x6527a231, "dbgp_external_startup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdf1882af, "dbgp_reset_prep" },
	{ 0xa976fc36, "device_create_file" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xce807a25, "up_write" },
	{ 0x12a38747, "usleep_range" },
	{ 0x57bc19d2, "down_write" },
	{ 0xbc9b8588, "ehci_cf_port_reset_rwsem" },
	{ 0x754d539c, "strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x999e8297, "vfree" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x82beef03, "usb_hub_clear_tt_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xfed34a2e, "usb_put_hcd" },
	{ 0x8e47018c, "usb_remove_hcd" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D2109EA5C94649F7D6376BF");
