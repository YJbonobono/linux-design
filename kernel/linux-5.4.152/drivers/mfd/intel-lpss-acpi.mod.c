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
	{ 0x561a05ab, "intel_lpss_resume" },
	{ 0x2ad30c6e, "intel_lpss_suspend" },
	{ 0xd610e668, "intel_lpss_prepare" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xb3a25778, "intel_lpss_probe" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xb0dc1bd3, "devm_kmemdup" },
	{ 0x2f81b10a, "acpi_match_device" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xdca8209d, "intel_lpss_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "intel-lpss");

MODULE_ALIAS("acpi*:INT3440:*");
MODULE_ALIAS("acpi*:INT3441:*");
MODULE_ALIAS("acpi*:INT3442:*");
MODULE_ALIAS("acpi*:INT3443:*");
MODULE_ALIAS("acpi*:INT3444:*");
MODULE_ALIAS("acpi*:INT3445:*");
MODULE_ALIAS("acpi*:INT3446:*");
MODULE_ALIAS("acpi*:INT3447:*");
MODULE_ALIAS("acpi*:INT3448:*");
MODULE_ALIAS("acpi*:INT3449:*");
MODULE_ALIAS("acpi*:INT344A:*");
MODULE_ALIAS("acpi*:80860AAC:*");
MODULE_ALIAS("acpi*:80860ABC:*");
MODULE_ALIAS("acpi*:80860AC2:*");
MODULE_ALIAS("acpi*:80865AAC:*");
MODULE_ALIAS("acpi*:80865ABC:*");
MODULE_ALIAS("acpi*:80865AC2:*");

MODULE_INFO(srcversion, "F2E4C2F8850061AB04CB257");
