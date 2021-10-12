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
	{ 0x20ddb397, "usb_serial_generic_open" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x47307ad0, "usb_serial_generic_close" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xc3d41234, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x6c257ac0, "tty_termios_hw_change" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x37a0cba, "kfree" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v0409p0063d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Bp0212d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v064Bp7825d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FBFA48CE2785233ED23B67F");
