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
	{ 0x94e48364, "param_ops_short" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x11e7e388, "dvb_usbv2_reset_resume" },
	{ 0x1ff4aaae, "dvb_usbv2_resume" },
	{ 0x93d2642f, "dvb_usbv2_suspend" },
	{ 0xc516686a, "dvb_usbv2_disconnect" },
	{ 0xadd11ee8, "dvb_usbv2_probe" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x99a00c20, "i2c_new_device" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa3bdc153, "zd1301_demod_get_dvb_frontend" },
	{ 0x189824e, "zd1301_demod_get_i2c_adapter" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x29df1f0d, "platform_device_register_full" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x2cc071a6, "i2c_unregister_device" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dvb_usb_v2,zd1301_demod");

MODULE_ALIAS("usb:v0ACEp13A1d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FC9C08274DBD9680A721546");
