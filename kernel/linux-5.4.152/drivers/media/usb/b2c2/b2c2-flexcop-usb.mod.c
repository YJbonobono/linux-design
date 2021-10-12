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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x3d6822e, "flexcop_device_initialize" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa7687e02, "flexcop_device_kfree" },
	{ 0xaeb509fc, "flexcop_sram_ctrl" },
	{ 0xfb578fc5, "memset" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9e037ea1, "flexcop_device_kmalloc" },
	{ 0x3ca552d, "usb_free_coherent" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xc4f84662, "flexcop_sram_set_dest" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9fb7be04, "flexcop_pass_dmx_packets" },
	{ 0x856ea5a3, "flexcop_wan_set_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xa32150eb, "usb_alloc_coherent" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x65581290, "flexcop_device_exit" },
	{ 0x11b21377, "usb_alloc_urb" },
};

MODULE_INFO(depends, "b2c2-flexcop");

MODULE_ALIAS("usb:v0AF7p0101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A105277B7B1F1A42FA1D7CC");
