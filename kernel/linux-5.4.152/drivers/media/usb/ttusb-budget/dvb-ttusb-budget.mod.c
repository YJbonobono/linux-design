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
	{ 0x94e48364, "param_ops_short" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x12723846, "dvb_register_frontend" },
	{ 0x35371f0c, "dvb_net_init" },
	{ 0x13aadac8, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7ff06523, "dvb_register_adapter" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x9601035f, "request_firmware" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x69acdf38, "memcpy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0x43304fc3, "dvb_unregister_adapter" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0x543080d5, "dvb_frontend_detach" },
	{ 0xfa415342, "dvb_unregister_frontend" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xd806d12c, "dvb_dmxdev_release" },
	{ 0x1cb1d576, "dvb_net_release" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("usb:v0B48p1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p1004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p1005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C2862AA86020340303CA403");
