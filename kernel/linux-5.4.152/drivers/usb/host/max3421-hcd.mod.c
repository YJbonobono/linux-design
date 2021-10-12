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
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc5850110, "printk" },
	{ 0xc848d5d6, "usb_hcd_giveback_urb" },
	{ 0xb813b1c9, "usb_hcd_unlink_urb_from_ep" },
	{ 0x1000e51, "schedule" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x6006847, "current_task" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8e47018c, "usb_remove_hcd" },
	{ 0xfed34a2e, "usb_put_hcd" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7c5af92b, "usb_add_hcd" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x96dbd846, "usb_create_hcd" },
	{ 0x2292b333, "spi_setup" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x73a0ebd4, "usb_hcd_link_urb_to_ep" },
	{ 0x4ac94403, "usb_hcd_check_unlink_urb" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xdc99c78d, "usb_hcd_resume_root_hub" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37a0cba, "kfree" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmaxim,max3421");
MODULE_ALIAS("of:N*T*Cmaxim,max3421C*");

MODULE_INFO(srcversion, "CE56882BC8D5F10B7042873");
