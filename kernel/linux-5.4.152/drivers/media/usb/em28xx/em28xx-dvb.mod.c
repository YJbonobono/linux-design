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
	{ 0xc4206bb5, "em28xx_unregister_extension" },
	{ 0xbb4bb62b, "em28xx_register_extension" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x1cb1d576, "dvb_net_release" },
	{ 0xfd463285, "dvb_create_media_graph" },
	{ 0x35371f0c, "dvb_net_init" },
	{ 0xd806d12c, "dvb_dmxdev_release" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x13aadac8, "dvb_dmxdev_init" },
	{ 0xfa415342, "dvb_unregister_frontend" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x43304fc3, "dvb_unregister_adapter" },
	{ 0x12723846, "dvb_register_frontend" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x7ff06523, "dvb_register_adapter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0x8fba6d11, "em28xx_uninit_usb_xfer" },
	{ 0x37a0cba, "kfree" },
	{ 0x4cb72c36, "em28xx_alloc_urbs" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x543080d5, "dvb_frontend_detach" },
	{ 0xc5850110, "printk" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x9f2f7639, "em28xx_setup_xc3028" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0x6bac0f9d, "em28xx_init_usb_xfer" },
	{ 0x49820503, "dvb_frontend_suspend" },
	{ 0x118aa710, "dvb_frontend_resume" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x7a98637f, "em28xx_stop_urbs" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf210b66a, "em28xx_write_reg_bits" },
	{ 0xf9a482f9, "msleep" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0x409f65ef, "em28xx_write_reg" },
	{ 0x70539501, "em28xx_gpio_set" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6626afca, "down" },
	{ 0xcf2a6966, "up" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa42afbce, "dvb_module_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3b5395d8, "dvb_module_probe" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfe990052, "gpio_free" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xf4cfa5b7, "em28xx_set_mode" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "em28xx,dvb-core");


MODULE_INFO(srcversion, "D18A7C1768894D25B2231B1");
