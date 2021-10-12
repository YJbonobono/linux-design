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
	{ 0x5e2670df, "bttv_sub_unregister" },
	{ 0xa95db587, "bttv_sub_register" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x12723846, "dvb_register_frontend" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x35371f0c, "dvb_net_init" },
	{ 0x13aadac8, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x7ff06523, "dvb_register_adapter" },
	{ 0x2a0c96b1, "bt878" },
	{ 0xd5d0bdef, "bt878_num" },
	{ 0xbc650908, "bttv_get_pcidev" },
	{ 0xdd64e639, "strscpy" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9601035f, "request_firmware" },
	{ 0xf9a482f9, "msleep" },
	{ 0x11dc4b6d, "bttv_gpio_enable" },
	{ 0x8ecf4acc, "bttv_write_gpio" },
	{ 0xb7870c84, "bt878_start" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x43304fc3, "dvb_unregister_adapter" },
	{ 0x543080d5, "dvb_frontend_detach" },
	{ 0xfa415342, "dvb_unregister_frontend" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xd806d12c, "dvb_dmxdev_release" },
	{ 0x1cb1d576, "dvb_net_release" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x1b74a361, "bt878_stop" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5850110, "printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x7751ad77, "dvb_dmx_swfilter_204" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bttv,dvb-core,bt878");


MODULE_INFO(srcversion, "DF37BB7C6E4944669CC8D78");
