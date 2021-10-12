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
	{ 0x9e46239a, "acpi_bus_unregister_driver" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x228318b2, "acpi_bus_register_driver" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x594bf15b, "ioport_map" },
	{ 0xc52f0388, "acpi_dev_resource_memory" },
	{ 0xfa0a8896, "acpi_dev_resource_io" },
	{ 0x569abcca, "acpi_walk_resources" },
	{ 0xc9f41342, "acpi_bus_get_status" },
	{ 0xedc03953, "iounmap" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x848d372e, "iowrite8" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqemu,pvpanic-mmio");
MODULE_ALIAS("of:N*T*Cqemu,pvpanic-mmioC*");
MODULE_ALIAS("acpi*:QEMU0001:*");

MODULE_INFO(srcversion, "DA8C132952EE7ED848BBADF");
