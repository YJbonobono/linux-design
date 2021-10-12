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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x9e46239a, "acpi_bus_unregister_driver" },
	{ 0x228318b2, "acpi_bus_register_driver" },
	{ 0x89d68935, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xd843bb0e, "watchdog_register_device" },
	{ 0xbef44855, "watchdog_init_timeout" },
	{ 0x569abcca, "acpi_walk_resources" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xc32f2624, "watchdog_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:NIC775C:*");

MODULE_INFO(srcversion, "BAC6824171BA714771B9F4A");
