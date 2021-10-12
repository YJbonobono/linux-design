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
	{ 0xf8f38da6, "parport_ieee1284_read_byte" },
	{ 0x2e9d6e64, "parport_ieee1284_read_nibble" },
	{ 0xe51995f6, "usb_serial_deregister_drivers" },
	{ 0x21be6017, "usb_serial_register_drivers" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xed324aca, "parport_del_port" },
	{ 0x3033d39c, "usb_unlink_urb" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x353697ae, "parport_remove_port" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0x29361773, "complete" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xf96cabf, "tty_port_tty_wakeup" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x3944290e, "parport_announce_port" },
	{ 0x3db6f5e, "parport_register_port" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x7e82aa1a, "usb_clear_halt" },
	{ 0xc3d41234, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x767d41f8, "tty_flip_buffer_push" },
	{ 0xb6c49cb2, "tty_insert_flip_string_fixed_flag" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport,usbserial");

MODULE_ALIAS("usb:v9710p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7715d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DA845DAB6E710BAC0B2B9B4");
