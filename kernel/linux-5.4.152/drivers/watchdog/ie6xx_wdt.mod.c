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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x430143ad, "param_ops_byte" },
	{ 0xa3b53740, "single_release" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0xc32f2624, "watchdog_unregister_device" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb177d101, "seq_printf" },
	{ 0x87a67f49, "single_open" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xd843bb0e, "watchdog_register_device" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4E148B6EE06B1ED305A0CCA");
