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
	{ 0xa3b53740, "single_release" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x73a0ebd4, "usb_hcd_link_urb_to_ep" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xd30cfc7f, "usb_hc_died" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xdc99c78d, "usb_hcd_resume_root_hub" },
	{ 0x4ac94403, "usb_hcd_check_unlink_urb" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc848d5d6, "usb_hcd_giveback_urb" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xb813b1c9, "usb_hcd_unlink_urb_from_ep" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb177d101, "seq_printf" },
	{ 0x87a67f49, "single_open" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xf8c0536e, "device_wakeup_enable" },
	{ 0x7c5af92b, "usb_add_hcd" },
	{ 0x96dbd846, "usb_create_hcd" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfed34a2e, "usb_put_hcd" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x8e47018c, "usb_remove_hcd" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C391A44C354E9D5516943CE");
