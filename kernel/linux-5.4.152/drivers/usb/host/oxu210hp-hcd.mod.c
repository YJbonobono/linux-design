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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x98c53813, "platform_bus_type" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xdc99c78d, "usb_hcd_resume_root_hub" },
	{ 0x29aaed00, "usb_hcd_poll_rh_status" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x1000e51, "schedule" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x37a0cba, "kfree" },
	{ 0xc848d5d6, "usb_hcd_giveback_urb" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0xd30cfc7f, "usb_hc_died" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96848186, "scnprintf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf9a482f9, "msleep" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf8c0536e, "device_wakeup_enable" },
	{ 0x7c5af92b, "usb_add_hcd" },
	{ 0x96dbd846, "usb_create_hcd" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfed34a2e, "usb_put_hcd" },
	{ 0x8e47018c, "usb_remove_hcd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9DAD014E7F62EE391502EB8");
