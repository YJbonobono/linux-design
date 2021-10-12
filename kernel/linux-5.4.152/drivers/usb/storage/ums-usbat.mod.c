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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf1674265, "usb_stor_set_xfer_buf" },
	{ 0xb5a4329d, "usb_stor_access_xfer_buf" },
	{ 0x35d66c0a, "usb_stor_post_reset" },
	{ 0x3016fb19, "usb_stor_disconnect" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0x628fc822, "usb_stor_probe2" },
	{ 0x5ca03dec, "fill_inquiry_response" },
	{ 0x3eba01ae, "usb_stor_host_template_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd2527971, "usb_stor_pre_reset" },
	{ 0xbfe9aa65, "usb_stor_reset_resume" },
	{ 0xbf337a9a, "usb_stor_ctrl_transfer" },
	{ 0xda49bb9f, "usb_stor_suspend" },
	{ 0xeb24f41f, "usb_stor_CB_reset" },
	{ 0xc482001e, "usb_stor_clear_halt" },
	{ 0x70e17579, "usb_stor_probe1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x35917d0f, "usb_stor_resume" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x1df99b7d, "usb_stor_bulk_transfer_sg" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v03F0p0207d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p0307d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0781p0005d0005dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "25B0CFBE94AEA955D90D48F");
