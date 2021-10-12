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
	{ 0x77ade3d0, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6b7e0565, "ir_raw_event_store_with_filter" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x43304fc3, "dvb_unregister_adapter" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x12723846, "dvb_register_frontend" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0xfa415342, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0x4e818077, "rc_allocate_device" },
	{ 0x1cb1d576, "dvb_net_release" },
	{ 0x543080d5, "dvb_frontend_detach" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xaad38701, "rc_free_device" },
	{ 0x94e48364, "param_ops_short" },
	{ 0xd806d12c, "dvb_dmxdev_release" },
	{ 0xc5850110, "printk" },
	{ 0x35371f0c, "dvb_net_init" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xc4aa48, "rc_register_device" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2cc071a6, "i2c_unregister_device" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7ff06523, "dvb_register_adapter" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x453c8403, "pci_msi_enabled" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x15cf5f8d, "i2c_bit_add_bus" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xc41422ca, "ir_raw_event_handle" },
	{ 0x99a00c20, "i2c_new_device" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x13aadac8, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "rc-core,dvb-core,i2c-algo-bit");

MODULE_ALIAS("pci:v00001ADEd00003038sv00004254sd00000550bc*sc*i*");
MODULE_ALIAS("pci:v00001ADEd00003038sv00004254sd00000552bc*sc*i*");
MODULE_ALIAS("pci:v00001ADEd00003038sv00004254sd00005580bc*sc*i*");
MODULE_ALIAS("pci:v00001ADEd00003038sv000013C2sd00003016bc*sc*i*");

MODULE_INFO(srcversion, "BE9C62A4C3005BC43FA5DF5");
