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
	{ 0xa010bb27, "usb_serial_generic_get_icount" },
	{ 0xbe899f43, "usb_serial_generic_tiocmiwait" },
	{ 0xe51995f6, "usb_serial_deregister_drivers" },
	{ 0x21be6017, "usb_serial_register_drivers" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xb6c49cb2, "tty_insert_flip_string_fixed_flag" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x767d41f8, "tty_flip_buffer_push" },
	{ 0xce50481c, "__tty_insert_flip_char" },
	{ 0xa9a0ec93, "usb_serial_port_softint" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v061DpC120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v061DpC140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v061DpC150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v061DpC160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v061DpC170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v061DpC1A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v061DpC180d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0C43D8BB80B7C48CB93D822");
