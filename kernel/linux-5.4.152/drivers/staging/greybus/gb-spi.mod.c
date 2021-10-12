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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x9c30bd95, "gb_gbphy_register_driver" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xfbe8a140, "gb_gbphy_deregister_driver" },
	{ 0xd9cb0c17, "gb_connection_destroy" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcf83c7f2, "gb_connection_enable" },
	{ 0x2cdc949, "gb_spilib_master_init" },
	{ 0x6cd7ba9, "gb_connection_create" },
	{ 0x67e46949, "gb_connection_disable" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xcb8510f5, "gb_spilib_master_exit" },
};

MODULE_INFO(depends, "gb-gbphy,greybus,gb-spilib");


MODULE_INFO(srcversion, "59B1CBA613FB35F89C92D65");
