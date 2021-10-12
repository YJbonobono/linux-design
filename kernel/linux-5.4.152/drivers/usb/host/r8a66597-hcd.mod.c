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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x73a0ebd4, "usb_hcd_link_urb_to_ep" },
	{ 0x5857b225, "ioread16_rep" },
	{ 0xe484e35f, "ioread32" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0x4ac94403, "usb_hcd_check_unlink_urb" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x754d539c, "strlen" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x848d372e, "iowrite8" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0xdc99c78d, "usb_hcd_resume_root_hub" },
	{ 0x29aaed00, "usb_hcd_poll_rh_status" },
	{ 0x5798862d, "usb_root_hub_lost_power" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfedd2163, "clk_get" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf8c0536e, "device_wakeup_enable" },
	{ 0x7c5af92b, "usb_add_hcd" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x96dbd846, "usb_create_hcd" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x20978fb9, "idr_find" },
	{ 0x790be0b9, "usb_bus_idr" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd3bfa753, "usb_bus_idr_lock" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc848d5d6, "usb_hcd_giveback_urb" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xb813b1c9, "usb_hcd_unlink_urb_from_ep" },
	{ 0xbb8b811a, "usb_hub_find_child" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xfed34a2e, "usb_put_hcd" },
	{ 0xedc03953, "iounmap" },
	{ 0x8e47018c, "usb_remove_hcd" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc5534d64, "ioread16" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "019589BA62B5BABFA5F908B");
