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
	{ 0x260e7566, "saa7146_unregister_extension" },
	{ 0x1585811, "saa7146_register_extension" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xf4c51711, "ttpci_budget_irq10_handler" },
	{ 0xaad38701, "rc_free_device" },
	{ 0x349c7313, "dvb_ca_en50221_init" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x4df88a82, "ttpci_budget_init_hooks" },
	{ 0x12723846, "dvb_register_frontend" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc4aa48, "rc_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4e818077, "rc_allocate_device" },
	{ 0x2a9da9d6, "ttpci_budget_init" },
	{ 0x7948c222, "budget_debug" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xb91779c2, "dvb_ca_en50221_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x3035af91, "ttpci_budget_deinit" },
	{ 0x543080d5, "dvb_frontend_detach" },
	{ 0xfa415342, "dvb_unregister_frontend" },
	{ 0x77ade3d0, "rc_unregister_device" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9601035f, "request_firmware" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1cfd6ce3, "ttpci_budget_set_video_port" },
	{ 0x88a699d2, "dvb_ca_en50221_frda_irq" },
	{ 0x8c9b2a4b, "dvb_ca_en50221_camready_irq" },
	{ 0xc430e5b1, "dvb_ca_en50221_camchange_irq" },
	{ 0x98397b22, "saa7146_setgpio" },
	{ 0xa3b96724, "rc_keydown" },
	{ 0xbc89ecd7, "ttpci_budget_debiread" },
	{ 0x6724a9cf, "ttpci_budget_debiwrite" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "saa7146,budget-core,rc-core,dvb-core");

MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000100Cbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000100Fbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001010bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001011bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001012bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001017bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000101Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001019bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000101Bbc*sc*i*");

MODULE_INFO(srcversion, "3909D1EFB94CD7C663D044D");
