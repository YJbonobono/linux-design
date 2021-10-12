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
	{ 0x767d41f8, "tty_flip_buffer_push" },
	{ 0xb6c49cb2, "tty_insert_flip_string_fixed_flag" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x7e82aa1a, "usb_clear_halt" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa9a0ec93, "usb_serial_port_softint" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v0C4Bp0100d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "38731AB0D2570579BC245C9");
