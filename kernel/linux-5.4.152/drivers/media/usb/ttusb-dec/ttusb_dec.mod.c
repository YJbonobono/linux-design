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
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x9601035f, "request_firmware" },
	{ 0x53ca4226, "input_free_device" },
	{ 0xf71a84b2, "ttusbdecfe_dvbs_attach" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x12723846, "dvb_register_frontend" },
	{ 0xdcdd8578, "ttusbdecfe_dvbt_attach" },
	{ 0x35371f0c, "dvb_net_init" },
	{ 0x13aadac8, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x7ff06523, "dvb_register_adapter" },
	{ 0xa32150eb, "usb_alloc_coherent" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x43304fc3, "dvb_unregister_adapter" },
	{ 0xfa415342, "dvb_unregister_frontend" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xd806d12c, "dvb_dmxdev_release" },
	{ 0x1cb1d576, "dvb_net_release" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xfb578fc5, "memset" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf8c679e2, "input_event" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x3ca552d, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xc5850110, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ttusbdecfe,dvb-core");

MODULE_ALIAS("usb:v0B48p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p1008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p1009d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "919EEA1BD9A7A3ECD84E7E6");
