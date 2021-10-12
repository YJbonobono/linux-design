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
	{ 0x80c2404b, "usb_get_from_anchor" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0xadebce6f, "usb_autopm_get_interface" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3033d39c, "usb_unlink_urb" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xf9386b0, "usb_autopm_put_interface_async" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0xb6c49cb2, "tty_insert_flip_string_fixed_flag" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc6cbbc89, "capable" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x25de87c5, "usb_autopm_get_interface_async" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xb55d1186, "usb_autopm_get_interface_no_resume" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x37a0cba, "kfree" },
	{ 0x767d41f8, "tty_flip_buffer_push" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa9a0ec93, "usb_serial_port_softint" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x65e08be7, "usb_autopm_put_interface" },
	{ 0xed247193, "usb_anchor_urb" },
	{ 0x11b21377, "usb_alloc_urb" },
};

MODULE_INFO(depends, "usbserial");


MODULE_INFO(srcversion, "CF14B9A9E760C3B5E21FF4E");
