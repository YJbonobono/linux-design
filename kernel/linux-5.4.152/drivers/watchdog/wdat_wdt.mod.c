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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xec788566, "acpi_target_system_state" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x54750daf, "devm_watchdog_register_device" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0x1693b589, "devm_ioport_map" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x848d372e, "iowrite8" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xe484e35f, "ioread32" },
	{ 0xf10de535, "ioread8" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xc5534d64, "ioread16" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D257BA0E8A0925DC024F803");
