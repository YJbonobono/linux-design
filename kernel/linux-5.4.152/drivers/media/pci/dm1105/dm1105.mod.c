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
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xaad38701, "rc_free_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc4aa48, "rc_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4e818077, "rc_allocate_device" },
	{ 0x12723846, "dvb_register_frontend" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xf9a482f9, "msleep" },
	{ 0x35371f0c, "dvb_net_init" },
	{ 0x13aadac8, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x7ff06523, "dvb_register_adapter" },
	{ 0x15cf5f8d, "i2c_bit_add_bus" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xa3b96724, "rc_keydown" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x37a0cba, "kfree" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0x43304fc3, "dvb_unregister_adapter" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xd806d12c, "dvb_dmxdev_release" },
	{ 0xfa415342, "dvb_unregister_frontend" },
	{ 0x1cb1d576, "dvb_net_release" },
	{ 0x77ade3d0, "rc_unregister_device" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core,dvb-core,i2c-algo-bit");

MODULE_ALIAS("pci:v0000109Fd0000036Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000195Dd00001105sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C24BADDBB50A7837BB43B7C");
