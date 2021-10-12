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
	{ 0x63effe55, "param_ops_ushort" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0403pC631d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1C40p0534d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7E418C1F8403B02B50CFC81");
