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
	{ 0x94e48364, "param_ops_short" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x260e7566, "saa7146_unregister_extension" },
	{ 0x1585811, "saa7146_register_extension" },
	{ 0x12723846, "dvb_register_frontend" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x4df88a82, "ttpci_budget_init_hooks" },
	{ 0x349c7313, "dvb_ca_en50221_init" },
	{ 0xa3573303, "saa7146_set_hps_source_and_sync" },
	{ 0xa4b2e766, "saa7146_register_device" },
	{ 0x9da15f86, "saa7146_vv_init" },
	{ 0x2a9da9d6, "ttpci_budget_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6724a9cf, "ttpci_budget_debiwrite" },
	{ 0x493cb7e2, "dvb_frontend_reinitialise" },
	{ 0xbc89ecd7, "ttpci_budget_debiread" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1cfd6ce3, "ttpci_budget_set_video_port" },
	{ 0x9601035f, "request_firmware" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0xe9ee0162, "saa7146_vv_release" },
	{ 0x5126256c, "saa7146_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb91779c2, "dvb_ca_en50221_release" },
	{ 0x98397b22, "saa7146_setgpio" },
	{ 0x37a0cba, "kfree" },
	{ 0x3035af91, "ttpci_budget_deinit" },
	{ 0x543080d5, "dvb_frontend_detach" },
	{ 0xfa415342, "dvb_unregister_frontend" },
	{ 0xf4c51711, "ttpci_budget_irq10_handler" },
	{ 0xc5850110, "printk" },
	{ 0x7948c222, "budget_debug" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "saa7146,dvb-core,budget-core,saa7146_vv");

MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00004F56bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00000010bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000010bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00000011bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000011bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000014bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000015bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000018bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000019bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000001Dbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000001Ebc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000001Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000001Bbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000002Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000002Cbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000003Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000020bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000021bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000022bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000028bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000023bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000030bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000031bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001154bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001155bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001156bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001176bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001157bc*sc*i*");

MODULE_INFO(srcversion, "A1FD59C515C01A5949FDC2C");
