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
	{ 0xf9a482f9, "msleep" },
	{ 0x1a58fbf0, "v4l2_ctrl_cluster" },
	{ 0xdd6b16f7, "gspca_suspend" },
	{ 0xd22670a8, "gspca_dev_probe" },
	{ 0xf766485b, "gspca_resume" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0x203104fa, "gspca_disconnect" },
	{ 0x471fa3b1, "v4l2_ctrl_new_std_menu" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0xc35e0e26, "gspca_frame_add" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0xdc775884, "usb_register_driver" },
};

MODULE_INFO(depends, "videodev,gspca_main");

MODULE_ALIAS("usb:v041Ep405Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0892d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0896d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0897d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p0321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p0323d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p0328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8pC001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8pC002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8pC301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15B8p6001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15B8p6002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp4802d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1F06FD9C13ADA98F80217E9");
