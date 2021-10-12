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
	{ 0x260e7566, "saa7146_unregister_extension" },
	{ 0x1585811, "saa7146_register_extension" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x98397b22, "saa7146_setgpio" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0x1ea571b3, "saa7146_i2c_adapter_prepare" },
	{ 0xdd64e639, "strscpy" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xa4b2e766, "saa7146_register_device" },
	{ 0x9da15f86, "saa7146_vv_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4f44fe30, "i2c_smbus_xfer" },
	{ 0x37a0cba, "kfree" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xe9ee0162, "saa7146_vv_release" },
	{ 0x5126256c, "saa7146_unregister_device" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "saa7146,saa7146_vv");

MODULE_ALIAS("pci:v00001131d00007146sv00000000sd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000017C8sd00000101bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000017C8sd00002101bc*sc*i*");

MODULE_INFO(srcversion, "D923BF03B29D82E0ABEFC77");
