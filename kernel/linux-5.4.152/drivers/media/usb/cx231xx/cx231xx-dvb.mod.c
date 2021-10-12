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
	{ 0xe5330534, "cx231xx_unregister_extension" },
	{ 0xe7a2ec6d, "cx231xx_register_extension" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xc5850110, "printk" },
	{ 0xfd463285, "dvb_create_media_graph" },
	{ 0x35371f0c, "dvb_net_init" },
	{ 0x13aadac8, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x12723846, "dvb_register_frontend" },
	{ 0x7ff06523, "dvb_register_adapter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x17ea7c7, "cx231xx_tuner_callback" },
	{ 0x3b5395d8, "dvb_module_probe" },
	{ 0x7a4609ca, "cx231xx_demod_reset" },
	{ 0x357ee4f6, "cx231xx_get_i2c_adap" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x571041c6, "cx231xx_init_bulk" },
	{ 0x1aff241, "cx231xx_init_isoc" },
	{ 0xd087011d, "cx231xx_set_alt_setting" },
	{ 0xa929f0a8, "cx231xx_uninit_isoc" },
	{ 0xc9b2a375, "cx231xx_uninit_bulk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xa42afbce, "dvb_module_release" },
	{ 0x43304fc3, "dvb_unregister_adapter" },
	{ 0x543080d5, "dvb_frontend_detach" },
	{ 0xfa415342, "dvb_unregister_frontend" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xd806d12c, "dvb_dmxdev_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1cb1d576, "dvb_net_release" },
	{ 0x4389ae8d, "cx231xx_set_mode" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cx231xx,dvb-core");


MODULE_INFO(srcversion, "65988010C2915E840DF0678");
