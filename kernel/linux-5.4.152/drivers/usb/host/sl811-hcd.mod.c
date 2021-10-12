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
	{ 0x5798862d, "usb_root_hub_lost_power" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7c5af92b, "usb_add_hcd" },
	{ 0x87a67f49, "single_open" },
	{ 0x8e47018c, "usb_remove_hcd" },
	{ 0x10c2c975, "usb_debug_root" },
	{ 0xa3b53740, "single_release" },
	{ 0x96dbd846, "usb_create_hcd" },
	{ 0xb177d101, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc848d5d6, "usb_hcd_giveback_urb" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfed34a2e, "usb_put_hcd" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x73a0ebd4, "usb_hcd_link_urb_to_ep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0xf8c0536e, "device_wakeup_enable" },
	{ 0x4ac94403, "usb_hcd_check_unlink_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xb813b1c9, "usb_hcd_unlink_urb_from_ep" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1D957C8063502ECAF3B2333");
