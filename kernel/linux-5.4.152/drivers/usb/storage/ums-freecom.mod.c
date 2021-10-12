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
	{ 0x829932e8, "usb_stor_bulk_transfer_buf" },
	{ 0x35d66c0a, "usb_stor_post_reset" },
	{ 0x8d7d8f71, "usb_stor_control_msg" },
	{ 0x3016fb19, "usb_stor_disconnect" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x628fc822, "usb_stor_probe2" },
	{ 0x3eba01ae, "usb_stor_host_template_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd2527971, "usb_stor_pre_reset" },
	{ 0xbfe9aa65, "usb_stor_reset_resume" },
	{ 0xda49bb9f, "usb_stor_suspend" },
	{ 0x70e17579, "usb_stor_probe1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x35917d0f, "usb_stor_resume" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x9e4a1508, "usb_stor_bulk_srb" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v07ABpFC01d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E3AA4AA73312AFDA83D671A");
