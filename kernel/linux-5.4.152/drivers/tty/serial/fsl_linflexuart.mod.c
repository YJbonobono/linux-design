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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xd3d70e1c, "uart_unregister_driver" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x25ca454d, "uart_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x5d17f4dd, "uart_remove_one_port" },
	{ 0xb2bf957a, "uart_suspend_port" },
	{ 0xb589c1fd, "uart_resume_port" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,s32v234-linflexuart");
MODULE_ALIAS("of:N*T*Cfsl,s32v234-linflexuartC*");

MODULE_INFO(srcversion, "32B04C5E65A5B6046748FB2");
