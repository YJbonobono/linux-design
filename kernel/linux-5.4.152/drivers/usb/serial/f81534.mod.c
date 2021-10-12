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
	{ 0xe51995f6, "usb_serial_deregister_drivers" },
	{ 0x21be6017, "usb_serial_register_drivers" },
	{ 0x24a047d6, "usb_serial_handle_break" },
	{ 0x4a5813b9, "usb_serial_handle_sysrq_char" },
	{ 0x767d41f8, "tty_flip_buffer_push" },
	{ 0xce50481c, "__tty_insert_flip_char" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xaebb54bc, "tty_kref_put" },
	{ 0xd9ddd3c7, "usb_serial_handle_dcd_change" },
	{ 0x56f3cf30, "tty_port_tty_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x1962666c, "usb_serial_generic_submit_read_urbs" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0xc3d41234, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa9a0ec93, "usb_serial_port_softint" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1934p1202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1202d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5704F4F3E579C831978B62D");
