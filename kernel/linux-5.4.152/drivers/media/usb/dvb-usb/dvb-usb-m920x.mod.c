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
	{ 0xa24f23d8, "__request_module" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe324b8b8, "usb_altnum_to_altsetting" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xed101225, "dvb_usb_device_exit" },
	{ 0x46519b2f, "dvb_usb_device_init" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x94e48364, "param_ops_short" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0xa3b96724, "rc_keydown" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x1a793c8b, "rc_keyup" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x2a771f85, "usb_ifnum_to_if" },
	{ 0x26778b55, "rc_repeat" },
};

MODULE_INFO(depends, "dvb-usb,rc-core");

MODULE_ALIAS("usb:v0DB0p5580d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDp1513d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDp0514d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDp0513d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1498p9206d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1498pA090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3219d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "369F48637A69995F0E3267E");
