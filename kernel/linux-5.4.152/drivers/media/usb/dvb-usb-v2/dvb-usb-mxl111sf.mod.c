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
	{ 0xf9a482f9, "msleep" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x78ee4270, "dvb_usbv2_generic_rw" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x1ff4aaae, "dvb_usbv2_resume" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xfb578fc5, "memset" },
	{ 0x94e48364, "param_ops_short" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0xadd11ee8, "dvb_usbv2_probe" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x9b59d023, "media_device_register_entity" },
	{ 0xc516686a, "dvb_usbv2_disconnect" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x93d2642f, "dvb_usbv2_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa561e320, "dvb_usbv2_generic_write" },
};

MODULE_INFO(depends, "dvb_usb_v2,tveeprom,mc");

MODULE_ALIAS("usb:v2040pC600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC603d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC604d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC609d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC60Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC60Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC60Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC653d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC65Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB703d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB753d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB763d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB764d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD853d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD854d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD863d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD864d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD8D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD8D4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD8E3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD8E4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD8FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC61Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC61Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB757d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB767d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0F7B38E8D68C325BEB691F3");
