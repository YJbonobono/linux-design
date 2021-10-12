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
	{ 0xa24f23d8, "__request_module" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4203947, "s5h1420_get_tuner_i2c_adapter" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x43304fc3, "dvb_unregister_adapter" },
	{ 0x9dea7991, "cx24113_agc_callback" },
	{ 0x12723846, "dvb_register_frontend" },
	{ 0x3e89b155, "cx24123_get_tuner_i2c_adapter" },
	{ 0xfa415342, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x1cb1d576, "dvb_net_release" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0x543080d5, "dvb_frontend_detach" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x94e48364, "param_ops_short" },
	{ 0xd806d12c, "dvb_dmxdev_release" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x35371f0c, "dvb_net_init" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7ff06523, "dvb_register_adapter" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x9601035f, "request_firmware" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x13aadac8, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "s5h1420,dvb-core,cx24113,cx24123");


MODULE_INFO(srcversion, "99DAA093927433C0AB79241");
