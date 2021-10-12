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
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xb2d4b247, "devm_rc_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1c0c3a3e, "devm_rc_allocate_device" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc41422ca, "ir_raw_event_handle" },
	{ 0x633a1138, "ir_raw_event_set_idle" },
	{ 0x6b7e0565, "ir_raw_event_store_with_filter" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3033d39c, "usb_unlink_urb" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("usb:v04E8pFF30d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D6436F5BCD0CB813E5C75E7");
