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
	{ 0xdd6b16f7, "gspca_suspend" },
	{ 0xd22670a8, "gspca_dev_probe" },
	{ 0xf766485b, "gspca_resume" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0x203104fa, "gspca_disconnect" },
	{ 0x471fa3b1, "v4l2_ctrl_new_std_menu" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0xc35e0e26, "gspca_frame_add" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0xdc775884, "usb_register_driver" },
};

MODULE_INFO(depends, "gspca_main,videodev");

MODULE_ALIAS("usb:v05E1p0893d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F1CBF77D45EC80374D2F2F2");
