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
	{ 0x85bd1608, "__request_region" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x7c5af92b, "usb_add_hcd" },
	{ 0x77358855, "iomem_resource" },
	{ 0x8e47018c, "usb_remove_hcd" },
	{ 0x96dbd846, "usb_create_hcd" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc848d5d6, "usb_hcd_giveback_urb" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xfed34a2e, "usb_put_hcd" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x73a0ebd4, "usb_hcd_link_urb_to_ep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf8c0536e, "device_wakeup_enable" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x4ac94403, "usb_hcd_check_unlink_urb" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x29361773, "complete" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xb813b1c9, "usb_hcd_unlink_urb_from_ep" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6D5B5898486FB34E1D7D1C5");
